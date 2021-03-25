#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

#define TOTAL_CUSTOMERS 10
#define TOTAL_EMPLOYEES 5

struct Account
{
    int acc_id;
    char type;
    float balance;
    struct Statement *stmt_list;
};

struct Statement
{
    float amount;
    float final_bal;
    struct Statement *next;
};

class Individual
{
public:
    int id;
    char dob[8], name[20];
    struct Account *acc;
    Individual()
    {
        strcpy(name, "unknown");
        strcpy(dob, "01011971");
        acc = NULL;
    }
    void create_account(int, char, float);
    void display_account_details();
    void transit_amount(float);
    virtual void base_sal()
    {
        cout << "Your base salary is 0.0";
    }
    virtual void produce_details();
    friend void format_date(Individual);
    friend void display_details(Individual &);
};

void Individual::create_account(int id, char type, float bal = 0)
{
    struct Account *acc = new struct Account;
    struct Statement *stmt = new struct Statement;

    stmt->amount = 0;
    stmt->next = NULL;

    acc->acc_id = id;
    acc->type = type;
    acc->balance = bal;
    acc->stmt_list = stmt;

    this->acc = acc;

    this->id = id;
}

void Individual::display_account_details()
{
    char res;
    cout << "\tHolder's NAME: " << name << endl;
    cout << "\tHolder's DOB: ";
    format_date(*this);
    cout << endl;
    cout << "\tAccount ID: " << acc->acc_id << endl;
    cout << "\tAccount TYPE: " << acc->type << endl;
    cout << "\tBALANCE: " << acc->balance << endl;
    cout << "Do you want to generate statement?(Y/N): ";
    cin >> res;
    if (res == 'Y' || res == 'y')
    {
        if (acc->stmt_list->amount == 0)
        {
            cout << "This is a fresh account, no transaction has been made." << endl;
        }
        else
        {
            int i = 1;
            struct Statement *s = acc->stmt_list;
            cout << endl;
            cout << "\tSR." << setw(13) << "AMOUNT" << setw(13) << "BALANCE" << endl;
            cout << "\t---" << setw(13) << "------" << setw(13) << "-------" << endl;
            while (s != NULL)
            {
                cout << "\t" << i++ << setw(10);
                s->amount > 0 && cout << "+";
                cout << s->amount << setw(10) << s->final_bal << endl;
                s = s->next;
            }
        }
    }
    else if (res == 'N' || res == 'n')
    {
        cout << "\tDONE." << endl;
    }
    else
    {
        cout << "Invalid response, try again later." << endl;
    }
}

void Individual::transit_amount(float amt)
{
    if (amt == 0)
    {
        cout << "Sorry, transaction of 0.00 is not allowed." << endl;
        return;
    }

    acc->balance += amt;

    if (acc->stmt_list->amount == 0)
    {
        acc->stmt_list->amount = amt;
        acc->stmt_list->final_bal = acc->balance;
        acc->stmt_list->next = NULL;
        return;
    }

    struct Statement *s = acc->stmt_list;
    struct Statement *stmt = new struct Statement;
    stmt->amount = amt;
    stmt->final_bal = acc->balance;
    stmt->next = NULL;
    while (s->next != NULL)
    {
        s = s->next;
    }
    s->next = stmt;
}

void display_details(Individual &indv)
{
    indv.produce_details();
}

class Customer : public Individual
{
private:
    static int cust_id;

public:
    Customer()
    {
        float bal;
        cout << "Enter customer's NAME: ";
        cin.getline(this->name, 20);
        cout << "Date of Birth DOB (DDMMYYYY): ";
        cin.getline(this->dob, 9);
        cout << "Initial deposit AMOUNT: ";
        cin >> bal;
        this->create_account(cust_id, 'C');
        this->transit_amount(bal);
        cust_id += 12;
    }

    Customer(float bal, char name[20], char dob[9])
    {
        strcpy(this->name, name);
        strcpy(this->dob, dob);
        this->create_account(cust_id, 'C');
        this->transit_amount(bal);
        cust_id += 12;
    }

    Customer(Customer &C)
    {
        strcpy(this->name, C.name);
        strcpy(this->dob, C.dob);
        this->create_account(C.cust_id, 'C');
        this->transit_amount(C.acc->balance);
    }

    void produce_details()
    {
        cout << "\tCustomer's ID: " << id << endl;
        cout << "\tHolder's NAME: " << name << endl;
        cout << "\tHolder's DOB: ";
        format_date(*this);
        cout << endl;
        cout << "\tAccount ID: " << acc->acc_id << endl;
        cout << "\tAccount TYPE: " << acc->type << endl;
        cout << "\tBALANCE: " << acc->balance << endl;
    }
};

class Employee : public Individual
{
private:
    static int emp_id;

public:
    char designation[20];
    int inc_percent = 2;
    Employee()
    {
        float bal;
        bal = 30000;
        cout << "Enter employee's NAME: ";
        cin.getline(this->name, 20);
        cout << "Date of Birth DOB (DDMMYYYY): ";
        cin.getline(this->dob, 9);
        cout << "Employee's DESIGNATION: ";
        cin.getline(this->designation, 20);
        this->create_account(emp_id, 'E');
        this->transit_amount(bal);
        emp_id += 12;
    }

    Employee(float bal, char name[20], char dob[9], char desgn[20])
    {
        strcpy(this->name, name);
        strcpy(this->dob, dob);
        strcpy(this->designation, desgn);
        this->create_account(emp_id, 'E');
        this->transit_amount(bal);
        emp_id += 12;
    }

    void base_sal()
    {
        cout << "Your base salary starts at 30000.00" << endl;
        cout << "And your annual increment is " << inc_percent << "%." << endl;
    }

    void produce_details()
    {
        cout << "\tEmployee's ID: " << id << endl;
        cout << "\tEmployee's NAME: " << name << endl;
        cout << "\tEmployee's DOB: ";
        format_date(*this);
        cout << endl;
        cout << "\tAccount ID: " << acc->acc_id << endl;
        cout << "\tAccount TYPE: " << acc->type << endl;
        cout << "\tBALANCE: " << acc->balance << endl;
    }
};

void format_date(Individual person)
{
    int i = 1;
    while (i != 9)
    {
        if (i == 3 || i == 5)
        {
            cout << "-";
        }
        cout << person.dob[i++ - 1];
    }
}

int Employee::emp_id = 10001;
int Customer::cust_id = 10012;

class Bank
{
private:
    Customer customers[TOTAL_CUSTOMERS];
    Employee employees[TOTAL_EMPLOYEES];
public:
    void add_customer();
    void add_employee();
    void prompt();
};

int main()
{
}

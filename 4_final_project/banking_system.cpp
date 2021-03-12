#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

void format_date(char[8]);
int cust_id = 10001;
int emp_id = 1201;

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
}

void Individual::display_account_details()
{
    char res;
    cout << "\tHolder's NAME: " << name << endl;
    cout << "\tHolder's DOB: ";
    format_date(this->dob);
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

class Customer : public Individual
{
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
};

class Employee : public Individual
{
public:
    char designation[20];
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
        this->create_account(emp_id, 'C');
        this->transit_amount(bal);
        emp_id += 12;
    }
};

class Bank
{
};

void format_date(char dob[8])
{
    int i = 1;
    while (i != 9)
    {
        if (i == 3 || i == 5)
        {
            cout << "-";
        }
        cout << dob[i++ - 1];
    }
}

int main()
{
    Customer c1;
    c1.transit_amount(-23);
    c1.transit_amount(70);
    c1.display_account_details();
    return 0;
}
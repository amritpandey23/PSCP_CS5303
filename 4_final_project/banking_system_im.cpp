/* author: Amrit Pandey
title: BANK MANAGEMENT APP
description:
    This project roughly includes nearly all the topics taught
    in CS_5303 Problem Solving with Programming Course

    LIST OF TOPICS:
        1. Data Types:
            - Primitive:
                + int, floats, bool etc.
                + quantifiers
                + qualifiers
            - User Defined:
                + struct
        2. Operators:
            - Arithmetic:
                +, -, /, *, %
            - Logical:
                &&, ||, ? :
            - Comparision:
                >, <, ==, <=, >=, !=
            - Assignment:
                *=, /=, %= etc.
        3. Functions
            - functions as sub routines
            - functions as first class variables
        4. Classes & Objects
            - Member variables
            - Member functions
            - Constructors
            - Destructors
            - Accessors & Mutators


*/
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

#define TOTAL_CUSTOMERS 10
#define TWIDTH 12

int menu()
{
    unsigned int res;
    cout << "\tChoose option: " << endl;
    cout << "\t1. Find customer by id" << endl;
    cout << "\t2. Last Registered Customer" << endl;
    cout << "\t3. Add a customer" << endl;
    cout << "\t4. Display all accounts" << endl;
    cout << "\t5. Calculate net wealth in bank" << endl;
    cout << "\t6. Exit" << endl;
    cout << "YOUR RESPONSE: ";
    cin >> res;
    return res;
}
class Individual
{
private:
    char name[20], dob[9], type;
    int id;
    float balance;

public:
    Individual() {}
    Individual(char name[20], char dob[9], int id)
    {
        strcpy(this->name, name);
        strcpy(this->dob, dob);
        this->id = id;
        this->type = 'C';
    }
    char *get_name()
    {
        return this->name;
    }
    char *get_dob()
    {
        return this->dob;
    }
    int get_id()
    {
        return id;
    }
    const float get_bal()
    {
        return balance;
    }
    char get_type()
    {
        return this->type;
    }
    void set_name(string name)
    {
        strcpy(this->name, name.c_str());
    }
    void set_dob(string dob)
    {
        strcpy(this->dob, dob.c_str());
    }
    void set_id(int id)
    {
        this->id = id;
    }
    void set_bal(float bal)
    {
        balance = bal;
    }
    void set_type(char t)
    {
        type = t;
    }
    friend void format_date(Individual);
    void deposit(float amt)
    {
        float amount = amt;
        class X
        {
        public:
            float bal;
        };
        X xyz;
        xyz.bal = amount;
        balance = xyz.bal;
    }
    // virtual void display_details();
    ~Individual()
    {
    }
};

class Customer : public Individual
{
private:
    static int cust_id;

public:
    Customer() {}

    Customer(char name[20], char dob[9], float initial_deposit) : Individual(name, dob, cust_id++)
    {
        set_bal(initial_deposit);
        set_type('C');
    }

    Customer(Customer &c)
    {
        set_name(c.get_name());
        set_dob(c.get_dob());
        set_id(c.get_id());
        set_bal(c.get_bal());
    }
    void display_details()
    {
        cout << "\t---- ACCOUNT DETAILS ----" << endl;
        cout << "\tACCOUNT TYPE: " << get_type() << endl;
        cout << "\tID: " << get_id() << endl;
        cout << "\tNAME: " << get_name() << endl;
        cout << "\tDOB: ";
        format_date(*this);
        cout << endl;
        cout << "\tNET BALANCE: INR " << get_bal() << endl;
        cout << "\t-------------------------" << endl << endl;
    }
    void display_details_hor()
    {
        cout << get_id() << setw(TWIDTH);
        cout << get_type() << setw(TWIDTH);
        cout << get_name() << setw(TWIDTH);
        format_date(*this);
        cout << setw(TWIDTH);
        cout << get_bal();
        cout << endl;
    }

    friend istream &operator>>(istream &input, Customer &c1)
    {
        char name[20], dob[9];
        float idepo;
        input.getline(name, 20);
        input.getline(dob, 9);
        input >> idepo;
        c1.set_name(name);
        c1.set_dob(dob);
        c1.set_id(cust_id++);
        c1.set_bal(idepo);
        cout << name << dob << idepo;
        return input;
    }
};

class Bank
{
private:
    Customer customers[TOTAL_CUSTOMERS];
    unsigned int curr_cust_num = 0;
    string name;

public:
    Bank()
    {
        this->name = "National Bank";
    }

    Bank(string name)
    {
        this->name = name;
    }
    Customer *get_customer_list()
    {
        return customers;
    }
    int get_cur_cus_num()
    {
        return curr_cust_num;
    }
    void display_all_cust()
    {
        cout << "ID" << setw(TWIDTH+10) << "NAME" << setw(TWIDTH+10) << "DOB" << setw(TWIDTH+10) << "BALANCE" << endl;
        for (int i = 0; i < curr_cust_num; i++)
        {
            this->customers[i].display_details_hor();
        }
    }
    Customer get_cust_by_id()
    {
        int id;
        Customer cx;
        cout << "Enter id number: ";
        cin >> id;
        for (int i = 0; i < get_cur_cus_num(); i++)
        {
            if (get_customer_list()[i].get_id() == id)
            {
                cx = get_customer_list()[i];
                cx.display_details();
                return cx;
            }
        }
        cout << "\tCustomer was not found!";
        return cx;
    }
    void add_customer(Customer c)
    {
        customers[curr_cust_num++] = c;
    }
    void add_customer_prompt()
    {
        Customer c;
        cout << "Enter all details of customer: ";
        cin >> c;
        add_customer(c);
        cout << "Customer was added successfully!" << endl;
    }
    float calc_net_wealth()
    {
        float sum = 0.0;
        for (int i = 0; i < curr_cust_num; i++)
        {
            sum += customers[i].get_bal();
        }
        cout << "------------------------" << endl;
        cout << "NET WEALTH = INR " << sum << endl;
        cout << "------------------------" << endl;
        return sum;
    }
    void start()
    {
        system("clear");
        while (true)
        {
            switch (menu())
            {
            case 1:
                get_cust_by_id();
                cout << "\n";
                break;
            case 2:
                get_latest_customer();
                cout << "\n";
                break;
            case 3:
                add_customer_prompt();
                cout << "\n";
                break;
            case 4:
                display_all_cust();
                cout << "\n";
                break;
            case 5:
                calc_net_wealth();
                cout << "\n";
                break;
            case 6:
                exit(0);
                break;
            default:
                cout << "Invalid response, try again." << endl;
                cout << "\n";
                break;
            }
        }
    }
    void get_latest_customer()
    {
        customers[curr_cust_num - 1].display_details();
    }
    friend void add_new_customer(Bank);
    ~Bank()
    {
        Customer *cus = this->customers;
        delete cus;
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

void add_new_customer(Bank b1)
{
    Customer c1;
    cout << "Enter customer details: ";
    cin >> c1;
    b1.add_customer(c1);
    cout << "Customer was added successfully!";
}

int Customer::cust_id = 10000;

int main()
{
    string names[4] = {
        "Amrit Pandey",
        "Fhulki Devi",
        "Nivesh Yadav",
        "Neo Yamaji"};
    string dobs[4] = {
        "23091997",
        "22081996",
        "21071995",
        "12122012"};
    float initial_deposits[4] = {
        12000.00,
        13000.00,
        14000.00,
        34000.00};
    int i = 0;
    char name[20], dob[9];
    Bank b1("National Bank of India");
    while (i < 4)
    {
        strcpy(name, names[i].c_str());
        strcpy(dob, dobs[i].c_str());
        Customer c(name, dob, initial_deposits[i]);
        cout << c.get_name();
        b1.add_customer(c);
        cout << b1.get_cur_cus_num() << " ";
        cout << b1.get_customer_list()[i].get_name() << endl;
        i++;
    }
    b1.start();
}

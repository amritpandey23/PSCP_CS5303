#include <iostream>
#include <cstring>
#define NAME_LEN 20

using namespace std;

enum                                                        // enum datatype
{
    MAKE = 1,
    DEPOSIT,
    WITHDRAW,
    INQUIRE,
    EXIT
};

enum gender
{
    MALE = 0, 
    FEMALE
};

typedef struct // Account struct
{
    int accID;
    int balance;
    Statement *list;
    Individual *indv;
} Account;

typedef struct
{
    int amt;
    Statement *stmt;
} Statement;

class Individual {
    public:
        string name;
        int dob;    //DDMMYYYY
        enum gender gen;
        Account *acc;
        Individual(Account *acc, string name, int dob, enum gender gen)
        {
            this->name = name;
            this->dob = dob;
            this->gen = gen;
            this->acc = acc;
        }
};

class Employee: public Individual {
    public:
        int emp_id;
        Employee()
        Employee(
            int emp_id,
            Account *salAcc, 
            string name, 
            int dob, 
            enum gender gen
        ):Individual(salAcc, name, dob, gen)
        {
            this->emp_id = emp_id;
        }
};                         // Inheritence

class Customer: public Individual {
    public:
        int cust_id;
        Employee *asgn_emp;
        Customer()
        Customer(
            int cust_id,
            Employee *asgn_emp,
            Account *acc, 
            string name, 
            int dob, 
            enum gender gen
        ):Individual(acc, name, dob, gen)
        {
            this->cust_id = cust_id;
            this->asgn_emp = asgn_emp;
        }
};

class Bank                                                  // Polymorphism: binding variable and associated methods together
{
private:
    Account *accounts;
    Employee *employees;
    Customer *customers;
    const static float version_num = 0.10;

public:
    Bank() // constructor
    {
        Account accounts[100];
        Employee employees[10];
        Customer customers[100];
        this->accounts = ptr;                               // object this pointer
        this->accNum = 0;
    }
    Bank(Account *ptr) // constructor overloading
    {
        this->accounts = ptr;
        this->accNum = sizeof(this->accounts) / sizeof(Account);
    }
    friend Account *get_all_accounts(Bank);
    static void what_is();
    void showMenu() // class member function
    {
        cout << "---------Menu-----------" << endl;
        cout << "1.make account" << endl;
        cout << "2.deposit" << endl;
        cout << "3.withdraw" << endl;
        cout << "4.show Account Info" << endl;
        cout << "5.quit" << endl;
    }
    void makeAccount()
    {
        int id;
        char name[NAME_LEN];
        int balance;
        cout << "[(MAKE ACCOUNT)]" << endl;
        cout << "ID (account ID):";
        cin >> id;
        cout << "(name):";
        cin >> name;
        cout << "(deposit money):";
        cin >> balance;
        cout << endl;
        accounts[accNum].accID = id;
        accounts[accNum].balance = balance;
        strcpy(accounts[accNum].cusName, name);
        accNum++;
    }
    void depositMoney()
    {
        int money;
        int id;
        cout << "[(DEPOSIT)]" << endl;
        cout << "ID(account ID):";
        cin >> id;
        cout << "(deposit money):";
        cin >> money;
        for (int i = 0; i < accNum; i++)
        {
            if (accounts[i].accID == id)
            {
                accounts[i].balance += money;
                cout << "(Deposit success)" << endl;
                return;
            }
        }
        cout << "ID(check your id)" << endl;
    }
    void withdrawMoney()
    {
        int money;
        int id;
        cout << "[(WITHDRAW)]" << endl;
        cout << "ID(account ID):";
        cin >> id;
        cout << "(withdraw money):";
        cin >> money;
        for (int i = 0; i < accNum; i++)
        {
            if (accounts[i].accID == id)
            {

                if (accounts[i].balance < money)
                {
                    cout << "�ܾ� ����" << endl;
                    return;
                }
                accounts[i].balance -= money;
                cout << "��ݿϷ�(Deposit success)" << endl;
                return;
            }
        }
        cout << "��ȿ���� ���� ID(check your id)" << endl;
    }
    void showAllAccInfo();
};

void Bank::what_is()                                            // class static function definition
{
    cout << "WHAT IS BANK CLASS" << endl;
    cout << "\tBank which store accounts of individuals\n";
    cout << "\tand provides various methods and functions\n";
    cout << "\tto manage their accounts.\n";
    cout << "\tVersion Number: " << version_num << endl;        // class static member access only by static function
}

void Bank::showAllAccInfo()                                     // scope resolution operator
{
    for (int i = 0; i < accNum; i++)
    {
        cout << "���� ID (id)" << accounts[i].accID << endl;
        cout << "�̸� (name)" << accounts[i].cusName << endl;
        cout << "�ܾ� (balance)" << accounts[i].balance << endl;
    }
}

Account *get_all_account(Bank b1)
{
    return b1.accounts;
}

int main(void)
{
    int choice;
    Bank b1;
    while (1)
    {
        b1.showMenu();
        cout << "select: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case MAKE:
            b1.makeAccount();
            break;
        case DEPOSIT:
            b1.depositMoney();
            break;
        case WITHDRAW:
            b1.withdrawMoney();
            break;
        case INQUIRE:
            b1.showAllAccInfo();
            break;
        case EXIT:
            return 0;
        default:
            cout << "Illegeal Section.." << endl;
        }
    }
    return 0;
}

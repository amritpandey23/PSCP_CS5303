#include <iostream>
using namespace std;
#define TOTAL_CAP 10

class Resident {
    private:
        char type;
        char gender;
        int age;
        bool isDefaulter;
        char designation[20];
    public:
        void set_data()
        {
            cout << "Enter type, gender, age, isDefaulter, designation: ";
            cin >> type >> gender >> age >> isDefaulter >> designation;
            cout << type << gender << age << isDefaulter << designation;
        }
};

class Building {
    private:
        Resident list_of_resident[TOTAL_CAP];
        unsigned int last_index = 0;
    public:
        void ask()
        {
            char ans;
            while(true)
            {
                cout << "Do you want to add a resident?(Y/N): " << endl;
                cin >> ans;
                if (ans == 'y' || ans == 'Y')
                {
                    add_resident();
                }
                else if (ans == 'n' || ans == 'N')
                {
                    break;
                }
                else 
                {
                    cout << "Invalid response! Try again." << endl;
                    continue;
                }
            }
        }
        void add_resident()
        {
            Resident r;
            r.set_data();
            list_of_resident[last_index] = r;
            last_index++;
        }
};


int main()
{
    Building b1;
    b1.ask();
    return 0;
}

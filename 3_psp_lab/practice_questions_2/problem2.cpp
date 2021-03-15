/* TITLE: Problem 2
DATE:
AUTHOR: Amrit Pandey MC20103 */
#include <iostream>
#define PI 3.141592653
using namespace std;

class Sphere
{
private:
    int radius;

public:
    Sphere(int radius)
    {
        this->radius = radius;
    }
    float surface_area()
    {
        return 4 * PI * radius * radius;
    }
    float volume()
    {
        return (4 / 3) * PI * radius * radius * radius;
    }
};

int main()
{
    // Write here
    int x;
    cout << "Enter radius of sphere(cm): ";
    cin >> x;
    Sphere s(x);
    cout << "Surface Area of sphere = " << s.surface_area() << "sq. cm" << endl;
    cout << "Volume of sphere = " << s.volume() << "cu. cm" << endl;
    return 0;
}
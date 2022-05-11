#include <iostream>
#include <string>
//#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <cstdlib>
//#include <ctime>

// shift + cmd + b to build & run
// static_cast <double> to change var to a double
//  *min_element(vec.begin(), vec.end()) << endl;
//  *max_element(vec.begin(), vec.end()) << endl;
// cout << boolalpha

using namespace std;

// FUNCTION PROTOTYPES
double calc_area_circle(double radius);
double calc_volume_cylinder(double radius, double height);
void area_circle();
void volume_cylinder();

const double pi{3.14159};

int main()
{
    area_circle();
    volume_cylinder();

    return 0;
}

double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height)
{
    return calc_area_circle(radius) * height;
}

void area_circle()
{
    double radius{};
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is: " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    double radius{};
    double height{};

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with a radius of " << radius << " and height of " << height << " is: " << calc_volume_cylinder(radius, height) << endl;
}
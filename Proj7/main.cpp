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

// PASS BY REFERENCE

void swap(int &a, int &b);

int main()
{
    int x{10};
    int y{20};
    cout << "Before swap: " << x << " " << y << endl;
    swap(x, y);
    cout << "Swapped: " << x << " " << y << endl;
    return 0;
}

// FUNCTION DEFINITIONS BELOW:

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
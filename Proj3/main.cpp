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

// The following code is to demonstrate pass-by-value

// FUNCTION PROTOTYPES
void pass_by_value(int num);
void pass_by_value_2(string s);
void pass_by_value_3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value(int num)
{
    num = 1000; // this is changing the formal parameter, not the actual
}

void pass_by_value_2(string s)
{
    s = "Changed! "; // this is changing the formal parameter, not the actual
}

void pass_by_value_3(vector<string> v)
{
    v.clear(); // Clears all elements in the vector
}

void print_vector(vector<string> v)
{
    for (auto s : v)
        cout << s << " ";
    cout << endl;
}

int main()
{
    int num{10};         // this is the actual parameter
    int another_num{20}; // this is the actual parameter

    cout << "The value before calling pass by value: " << num << endl;
    pass_by_value(num);
    cout << "The value after calling pass by value: " << num << endl;

    cout << "The value before calling pass by value: " << another_num << endl;
    pass_by_value(another_num);
    cout << "The value after calling pass by value: " << another_num << endl;

    string name{"Zach"};
    cout << "The string before calling pass by value: " << name << endl;
    pass_by_value_2(name);
    cout << "The string after calling pass by value: " << name << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};
    cout << "Before calling pass by value: ";
    print_vector(stooges);
    pass_by_value_3(stooges);

    cout << "Stooges after pass by value: ";
    print_vector(stooges);
    cout << endl;

    return 0;
}

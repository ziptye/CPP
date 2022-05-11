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

// OVERLOADING FUNCTIONS

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num)
{
    cout << "Printing out num: " << num << endl;
}

void print(double num)
{
    cout << "Printing out double num: " << num << endl;
}

void print(string name)
{
    cout << "Hello, your name is: " << name << endl;
}

void print(string first_name, string last_name)
{
    cout << "Hello there : " << first_name + " " + last_name << endl;
}

void print(vector<string> a)
{
    for (auto s : a)
        cout << s + " ";
    cout << endl;
}

int main()
{
    print(10);
    print(20.2);
    print("Zach");
    print("Zach", "Pennington");

    vector<string> four_friends{"Zach", "Larry", "Moe", "Curly"};
    print(four_friends);

    return 0;
}
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

// Default Argument Values

double calc_cost(double base_cost, double tax_rate = 0.06); // set the default tax rate in the function prototype

double calc_cost(double base_cost, double tax_rate) // DO NOT PUT DEFAULT HERE IN DEFINITION IF IN PROTOTYPE
{
    return base_cost += (base_cost * tax_rate);
}

int main()
{
    double cost{0};
    cost = calc_cost(200.0); // this will use the default 0.06 tax rate
    cout << cost << " using the default tax rate." << endl;
    cost = calc_cost(200.0, 0.08); // this will use the 0.08 tax rate
    cout << cost << " using the pre-defined tax rate." << endl;
    return 0;
}
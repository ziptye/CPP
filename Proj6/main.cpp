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

// PASSING ARRAYS TO FUNCTIONS
void print_array(int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(int arr[], size_t size)
{
    for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void set_array(int arr[], size_t size, int value)
{
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}

int main()
{
    int my_numbers[]{1, 2, 3, 4, 5};

    print_array(my_numbers, 5);
    set_array(my_numbers, 5, 100);
    print_array(my_numbers, 5);
}
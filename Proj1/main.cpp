#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

// shift + cmd + b to build & run
// static_cast <double> to change var to a double
//  *min_element(vec.begin(), vec.end()) << endl;
//  *max_element(vec.begin(), vec.end()) << endl;

using namespace std;

int main()
{
    char user_input;
    vector<int> vec;

    do
    {
        cout << "\n-----------------------" << endl;

        cout << "P: Print Numbers in list" << endl;
        cout << "A: Add a number to list" << endl;
        cout << "M: Display mean of the numbers" << endl;
        cout << "S: Display the smallest number" << endl;
        cout << "L: Display the largest number" << endl;

        cout << "Please enter your selection: ";
        cin >> user_input;

        if (user_input == 'P' || user_input == 'p')
        {
            if (vec.size() == 0)
                cout << "[] - this list is empty" << endl;
            else
            {
                cout << "[ ";
                for (auto num : vec)
                    cout << num << " ";
                cout << "]";
            }
        }
        else if (user_input == 'A' || user_input == 'a')
        {
            int num(0);
            cout << "Please enter a number: ";
            cin >> num;
            vec.push_back(num);
            cout << num << " added!" << endl;
        }
        else if (user_input == 'M' || user_input == 'm')
        {
            if (vec.size() == 0)
                cout << "Unable to calculate mean - no data! " << endl;
            else
            {
                double total(0);
                for (auto num : vec)
                    total += num;
                cout << "The mean is: " << total / vec.size();
            }
        }
        else if (user_input == 'S' || user_input == 's')
        {
            cout << "The smallest number is: " << *min_element(vec.begin(), vec.end()) << endl;
        }
        else if (user_input == 'L' || user_input == 'l')
        {
            cout << "The largest number is: " << *max_element(vec.begin(), vec.end()) << endl;
        }

    } while (user_input != 'Q' && user_input != 'q');

    cout << "Goodbye! " << endl;

    return 0;
}
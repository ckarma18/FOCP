#include <iostream>
using namespace std;

/********************************
        alphabetacoder.com
C++ program to find the age group
*********************************/

#include <iostream>

using namespace std;

int main() {
    // declare variables
    double age;

    // take input
    cout << "Enter the age: ";
    cin >> age;

    // find the grade
    if (age <= 0)
        cout << "Invalid age!";
    else if (age < 2)
        cout << "Age group: Baby";
    else if (age < 13)
        cout << "Age group: Child";
    else if (age < 18)
        cout << "Age group: Teenage";
    else if (age < 60)
        cout << "Age group: Adult";
    else
        cout << "Age group: Old";

    return 0;
}








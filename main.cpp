#include <iostream>

// Write a program that will read in a users’ first name and last name and output their
// name in the format LastName, FirstName.

using namespace std;

int main() {
    cout << "Enter first and last name separated by a space (e.g. Jake O'Reilly): " << endl;

    string fName, lName;

    cin >> fName >> lName;

    cout << "Last name, first name: " << lName << " " << fName << endl;

    return 0;
}

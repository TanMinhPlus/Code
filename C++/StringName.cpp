#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Your name is: " << lastName << ", " << firstName << endl;
    return 0;
}

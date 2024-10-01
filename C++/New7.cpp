#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double number;
    int intPart;
    double fractPart;
    cout << "Enter a number: ";
    cin >> number;
    intPart = static_cast<int>(number);
    fractPart = number - intPart;
    cout << fixed << showpoint << setprecision (2);
    cout << "The original number: " << number << endl;
    cout << "The integeral part: " << intPart << endl;
    cout << "The fractional part: " << fractPart;
    return 0;
}
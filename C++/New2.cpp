#include<iostream>
#include<string>
using namespace std;

int main(){
    string first;
    string initail;
    string last;
    string space = " ";
    string dot = ".";
    string fullName;
    cout << "Enter your first name: ";
    cin >> first;
    cout << "Enter your inital: ";
    cin >> initail;
    cout << "Enter your last name: ";
    cin >> last;
    fullName = first + space + initail + space + last + dot;
    cout << "Your full name is:  " << fullName;
    return 0;
}
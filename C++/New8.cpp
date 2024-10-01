#include<iostream>
using namespace std;

int main(){
    int seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    double hours = seconds / 3600;
    double minutes = (seconds % 3600) / 60;
    double left_seconds = seconds % 60;
    cout << hours << ":" << minutes << ":" << left_seconds;
    return 0;
}
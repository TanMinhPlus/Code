#include <iostream>
using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * (100.0 / 180.0);
}

int main() {
    double fahrenheit;
    cout << "Nhập giá trị (°F): ";
    cin >> fahrenheit;
    cout << fahrenheit << " °F bằng " << fahrenheitToCelsius(fahrenheit) << " °C." << endl;
    return 0;
}

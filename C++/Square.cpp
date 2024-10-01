#include <iostream>
using namespace std;

int main() {
    float a, area, perimeter;
    cout << "Enter the size of one side of the square: ";
    cin >> a;
    area = a*a;
    perimeter = 4 * a;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    return 0;
}

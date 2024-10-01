#include <iostream>
using namespace std;

double inchToCm(double inch) {
    return inch * 2.54;
}

int main() {
    double inch;
    cout << "Nhập giá trị (inch): ";
    cin >> inch;
    cout << inch << " inch bằng " << inchToCm(inch) << " cm." << endl;
    return 0;
}

#include <iostream>
using namespace std;

double cmToInch(double cm) {
    return cm * 0.3937;
}

int main() {
    double cm;
    cout << "Nhập giá trị (cm): ";
    cin >> cm;
    cout << cm << " cm bằng " << cmToInch(cm) << " inch." << endl;
    return 0;
}

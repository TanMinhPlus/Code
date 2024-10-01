#include <iostream>
using namespace std;

int sum1To100() {
    return (100 * (100 + 1)) / 2; 
}

int main() {
    cout << "Tổng từ 1 đến 100 là: " << sum1To100() << endl;
    return 0;
}

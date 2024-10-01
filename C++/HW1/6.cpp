#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;

int sumOfList(const vector<int>& numbers) {
    return accumulate(numbers.begin(), numbers.end(), 0);
}

int main() {
    vector<int> numbers = {23, 45, 12, 9, 34};
    cout << "Tổng của danh sách là: " << sumOfList(numbers) << endl;
    return 0;
}

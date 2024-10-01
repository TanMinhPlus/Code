#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;

int productOfList(const vector<int>& numbers) {
    return accumulate(numbers.begin(), numbers.end(), 1, multiplies<int>());
}

int main() {
    vector<int> numbers = {23, 45, 12, 9, 34};
    cout << "Tích của danh sách là: " << productOfList(numbers) << endl;
    return 0;
}

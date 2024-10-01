#include <iostream>
#include <vector>
using namespace std;

int findSmallest(const vector<int>& numbers) {
    int smallest = numbers[0];
    for (int num : numbers) {
        if (num < smallest) {
            smallest = num;
        }
    }
    return smallest;
}

int main() {
    vector<int> numbers = {23, 45, 12, 9, 34};
    cout << "Số nhỏ nhất là: " << findSmallest(numbers) << endl;
    return 0;
}

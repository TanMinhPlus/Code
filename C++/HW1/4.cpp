#include <iostream>
using namespace std;

void calculateTotalSale() {
    double softDrinkPrice = 1.0, milkPrice = 2.0, coffeePrice = 3.0;
    int softDrinks = 2, milkBottles = 3, coffeeCans = 1;
    double taxRate = 0.09;
    
    double subtotal = (softDrinks * softDrinkPrice) + (milkBottles * milkPrice) + (coffeeCans * coffeePrice);
    double tax = subtotal * taxRate;
    double total = subtotal + tax;
    
    cout << "Tổng trước thuế: $" << subtotal << endl;
    cout << "Thuế: $" << tax << endl;
    cout << "Tổng cộng: $" << total << endl;
}

int main() {
    calculateTotalSale();
    return 0;
}

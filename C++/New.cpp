#include<iostream>
#include<cmath>

using namespace std;

main(){
   int balance = 0;
   int transaction;
   cout << "Enter the value od the first transaction: ";
   cin >> transaction;
   balance += transaction;
   cout << "Enter the value of the second transaction: ";
   cin >> transaction;
   balance += transaction;
   cout <<"The total balance is: " << balance <<" dollars";
   return 0;
}

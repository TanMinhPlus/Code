#include<iostream>

using namespace std;
int main()
{
 const double PI = 3.14159;   
 double radius;
 double perimeter;
 double area;
 cout << "Enter the radius of the circle: ";
 cin >> radius; 
 perimeter = 2 * PI * radius;
 area = PI * radius * radius;
 cout << "The radius is : " << radius << endl;
 cout << "The perimeter is: " << perimeter <<endl;
 cout << "The area is: " << area << endl;
 return 0;
} 

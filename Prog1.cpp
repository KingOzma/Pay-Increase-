//Create a program to accept the previous salary, then output the retroactive pay due the employee, the new annual salary, and the new monthly salary. 
#include <iostream> 
using namespace std; 
int main() 
 
 { 
double salary, retroactive, newSalary, increase, monthly; 
const double incomeIncrease = .076; 
  
cout << "Input old annual salary." << endl; 
cin >> salary; 
 
newSalary = (salary * .076) + salary; 
increase = newSalary - salary; 
monthly = newSalary / 12; 
retroactive = (salary / 2) * incomeIncrease; 
 
cout << endl; 
cout << "New annual salary is: $" << newSalary << endl; 
cout << "Receiving a $" << increase << " increase in salary." << endl; 
cout << "Receiving $" << retroactive << " in retroactive salary." << endl; 
cout << "New monthly salary is: $" << monthly << endl; 
 
 return 0; 
} 
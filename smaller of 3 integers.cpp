/*
Name: Chloe Zambrano

Smaller of three integers. 
This program asks the user to input three integer numbers and prints out the smaller of the three.
*/

#include <iostream>   
using namespace std; 
int main()           
{
  double num1, num2, num3; //Note: declare double when comparing #s
  cout << "Enter the first number: "<< endl;
  cin >> num1;
  cout << "Enter the second number: "<< endl;
  cin >> num2;
  cout << "Enter the third number: "<< endl;
  cin >> num3;

  if (num1 < num2 && num1 < num3) //If function to determine smaller value
  {
    cout << "The smaller of the three is " << num1 << endl;
  }
  else if (num2 < num1 && num2 < num3)
  {
    cout << "The smaller of the three is " << num2 << endl;
  }
  else
  {
    cout << "The smaller of the three is " << num3 << endl;
  }

  return 0; 
}

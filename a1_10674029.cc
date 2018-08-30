#include <iostream>
using namespace std;

int main()
{
  int n, i;
  // declaring two varibles n and i
  bool isPrime = true;

  cout << "Enter a positive integer: ";
  // asking the user7 to input a positive integer
  cin >> n;
  //declaring variable n by storing users input in it

  for (i = 2; i <= n / 2; ++i)
  // using a for loop
  {
      if(n % i == 0)
      {
         isPrime = false;
         break;
      }
  }
  if (isPrime)
    cout << "This is a prime number";
    // If user inputs a prime number then the computer would say"This is a prime number"
  else
    cout << "This is not a prime number";
    //Else if user does not input a prime number then the computer would say"This is not a prime number"
    return 0;
}

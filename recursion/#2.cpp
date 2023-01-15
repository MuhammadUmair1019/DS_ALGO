// Find factorial using recursion

// 1- using recursion
// Time complexity O(n)
// Space complexity O(n)

#include <iostream>
using namespace std;

int factorial(int n)
{
  if (n == 0)
    return 0;
  return factorial(n - 1) * n;
}

int main()
{
  int n;
  int r;

  cout << "Please enter a number" << endl;
  cin >> n;

  r = factorial(n);
  cout << r;
}

// 2- using for loop
// Time complexity O(n)
// space complexity O(1)

int main()
{
  int n;
  int r = 0;

  cout << " Please enter a number: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    r *= i;
  }

  cout << "Factorial of !" << n << "is " << r;
}
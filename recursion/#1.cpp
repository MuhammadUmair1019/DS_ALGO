// let sum of all natural number using recursion

// 1- using recursion
// Time complexity O(n)
// Space complexity O(n)

#include <iostream>
using namespace std;

int sum(int n)
{
  if (n == 0)
    return 0;
  return sum(n - 1) + n;
}

int main()
{
  int n;

  cout << "Please enter a number" << endl;
  cin >> n;

  sum(n);
}

// 2- using formula
// Time complexity O(1)
// Space compelxity O(1)

int main()
{
  int n;

  cout << "Please enter a number" << endl;
  cin >> n;

  int result = n * (n + 1) / 2;

  cout << "The sum of n natural number: " << result;
} 

// 3- using for loop
// Time complexity O(n)
// space complexity O(1)

int main()
{
  int n;
  int sum = 0;

  cout << " Please enter a number: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }

  cout<<"The sum of N natural number is: "<< sum;
}
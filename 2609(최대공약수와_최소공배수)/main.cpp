#include <iostream>
using namespace std;

int findGcd(int num1, int num2)
{
  int remainder;

  remainder = num2;
  while (num1 % num2)
  {
    remainder = num1 % num2;
    num1 = num2;
    num2 = remainder;
  }
  return (remainder);
}

int main(void)
{
  int num1;
  int num2;
  int remainder;

  cin >> num1 >> num2;
  remainder = num2;
  if (num1 > num2)
    remainder = findGcd(num1, num2);
  else if (num1 < num2)
    remainder = findGcd(num2, num1);
  cout << remainder << endl;
  cout << (num1 * num2) / remainder << endl;
  return (0);
}

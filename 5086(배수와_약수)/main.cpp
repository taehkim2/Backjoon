#include <iostream>
using namespace std;

std::string factorMultipleCheck(int num1, int num2)
{
  int temp;

  if (num1 < num2)
  {
    temp = num1;
    for (int i = 1; temp < num2; i++)
    {
      temp = num1 * i;
      if (temp == num2)
        return ("factor");
    }
  }
  else if (num1 > num2)
  {
    temp = num2;
    for (int i = 1; temp < num1; i++)
    {
      temp = num2 * i;
      if (num1 == temp)
        return ("multiple");
    }
  }
  return ("neither");
}

int main(void)
{
  int num1;
  int num2;

  while (1)
  {
    cin >> num1;
    cin >> num2;
    if (num1 == 0 && num2 == 0)
      return (0);
    cout << factorMultipleCheck(num1, num2) << endl;
  }
  return (0);
}

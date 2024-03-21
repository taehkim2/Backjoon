#include <iostream>
using namespace std;

int main(void)
{
  int num[5];
  int result = 0;

  for (int i = 0; i < 5; i++)
  {
    cin >> num[i];
    num[i] *= num[i];
    result += num[i];
  }
  cout << result % 10 << endl;
  return (0);
}

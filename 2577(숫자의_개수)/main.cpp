#include <iostream>
using namespace std;

int main(void)
{
  int result;
  int num;
  int numCnt[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  result = 1;
  for (int i = 0; i < 3; i++)
  {
    cin >> num;
    result *= num;
  }
  while (result != 0)
  {
    numCnt[result % 10] += 1;
    result /= 10;
  }
  for (int i = 0; i < 10; i++)
  {
    cout << numCnt[i] << "\n";
  }
  return (0);
}

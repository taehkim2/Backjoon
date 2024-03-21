#include <iostream>
using namespace std;

int main(void)
{
  int num[8];

  for (int i = 0; i < 8; i++)
  {
    cin >> num[i];
  }
  if (num[0] < num[1])
  {
    for (int i = 0; i < 7; i++)
    {
      if (num[i] > num[i + 1])
      {
        cout << "mixed\n";
        return (0);
      }
    }
    cout << "ascending\n";
  }
  else if (num[0] > num[1])
  {
    for (int i = 0; i < 7; i++)
    {
      if (num[i] < num[i + 1])
      {
        cout << "mixed\n";
        return (0);
      }
    }
    cout << "descending\n";
  }
  return (0);
}

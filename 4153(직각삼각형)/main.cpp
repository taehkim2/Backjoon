#include <algorithm>
#include <iostream>
using namespace std;

int main(void)
{
  int line[3];

  while (1)
  {
    for (int i = 0; i < 3; i++)
    {
      cin >> line[i];
      line[i] *= line[i];
    }
    if (line[0] == 0 && line[1] == 0 && line[2] == 0)
      break;
    if (line[0] == 0 || line[1] == 0 || line[2] == 0)
    {
      cout << "wrong\n";
      continue;
    }
    sort(line, line + 3);
    if (line[0] + line[1] == line[2])
      cout << "right\n";
    else
      cout << "wrong\n";
  }
  return (0);
}

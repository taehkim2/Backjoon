#include <iostream>
using namespace std;

int main(void)
{
  string line;
  int cnt;
  int N;

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> line;
    cnt = 0;
    for (size_t j = 0; j < line.length() && cnt >= 0; j++)
    {
      if (line[j] == '(')
        cnt++;
      else if (line[j] == ')')
        cnt--;
    }
    if (cnt == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return (0);
}

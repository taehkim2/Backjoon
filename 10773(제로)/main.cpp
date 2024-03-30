#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
  stack<int> S;
  int k;
  int n;
  int res = 0;

  cin >> k;
  for (int i = 0; i < k; i++)
  {
    cin >> n;
    if (n == 0)
      S.pop();
    else
      S.push(n);
  }
  while (!S.empty())
  {
    res += S.top();
    S.pop();
  }
  cout << res << "\n";
  return (0);
}

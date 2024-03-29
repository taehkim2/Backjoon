#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
  queue<int> Q;
  string line;
  int N;
  int x;

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> line;
    if (line == "push")
    {
      cin >> x;
      Q.push(x);
    }
    else if (line == "pop")
    {
      if (Q.empty())
        cout << "-1" << endl;
      else
      {
        cout << Q.front() << endl;
        Q.pop();
      }
    }
    else if (line == "size")
    {
      cout << Q.size() << endl;
    }
    else if (line == "empty")
    {
      cout << Q.empty() << endl;
    }
    else if (line == "front")
    {
      if (Q.empty())
      {
        cout << "-1" << endl;
      }
      else
      {
        cout << Q.front() << endl;
      }
    }
    else if (line == "back")
    {
      if (Q.empty())
      {
        cout << "-1" << endl;
      }
      else
      {
        cout << Q.back() << endl;
      }
    }
  }
}

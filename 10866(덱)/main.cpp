#include <deque>
#include <iostream>
using namespace std;

int main(void)
{
  deque<int> DQ;
  string cmd;
  int X;
  int N;

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> cmd;
    if (cmd == "push_front")
    {
      cin >> X;
      DQ.push_front(X);
    }
    else if (cmd == "push_back")
    {
      cin >> X;
      DQ.push_back(X);
    }
    else if (cmd == "pop_front")
    {
      if (DQ.empty())
        cout << "-1" << endl;
      else
      {
        cout << DQ.front() << endl;
        DQ.pop_front();
      }
    }
    else if (cmd == "pop_back")
    {
      if (DQ.empty())
        cout << "-1" << endl;
      else
      {
        cout << DQ.back() << endl;
        DQ.pop_back();
      }
    }
    else if (cmd == "size")
    {
      cout << DQ.size() << endl;
    }
    else if (cmd == "empty")
    {
      cout << DQ.empty() << endl;
    }

    else if (cmd == "front")
    {
      if (DQ.empty())
        cout << "-1" << endl;
      else
        cout << DQ.front() << endl;
    }
    else if (cmd == "back")
    {
      if (DQ.empty())
        cout << "-1" << endl;
      else
        cout << DQ.back() << endl;
    }
  }
  return (0);
}

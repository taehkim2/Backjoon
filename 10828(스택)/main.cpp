#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
  stack<int> stack;
  string line;
  int N;
  int num;

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> line;
    if (line == "push")
    {
      cin >> num;
      stack.push(num);
    }
    else if (line == "pop")
    {
      if (stack.empty())
        cout << "-1" << endl;
      else
      {
        cout << stack.top() << endl;
        stack.pop();
      }
    }
    else if (line == "size")
      cout << stack.size() << endl;
    else if (line == "empty")
      cout << stack.empty() << endl;
    else if (line == "top")
    {
      if (stack.empty())
        cout << "-1" << endl;
      else
        cout << stack.top() << endl;
    }
  }
  return (0);
}

#include <iostream>
#include <stack>
using namespace std;

int *inputNumSequence(int N)
{
  int *arr = new int[N + 1];

  for (int i = 1; i < N + 1; i++)
    cin >> arr[i];
  return (arr);
}

string makeResult(int *arr, int N)
{
  stack<int> st;
  string res;
  int num = 1;
  int idx = 1;

  while (idx != N + 1)
  {
    if (!st.empty() && (arr[idx] == st.top()))
    {
      res += "-\n";
      st.pop();
      idx++;
    }
    else if (num <= N)
    {
      res += "+\n";
      st.push(num);
      num++;
    }
    else if (!st.empty() && (arr[idx] != st.top()))
    {
      res = "NO\n";
      break;
    }
  }
  return (res);
}

int main(void)
{
  int N;
  int *arr;

  cin >> N;
  arr = inputNumSequence(N);
  cout << makeResult(arr, N);
  delete arr;
  return (0);
}

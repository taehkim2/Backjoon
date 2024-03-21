#include <iostream>
using namespace std;

std::string checkPerfectNum(int N)
{
  std::string s = " = ";
  int result = 0;
  int i;

  for (i = 1; i < N; i++)
  {
    if (N % i == 0)
    {
      result += i;
      s += to_string(i);
      if (result == N)
        break;
      s += " + ";
    }
  }
  if (i * 2 == N)
    return (s);
  return (" is NOT perfect.");
}

int main(void)
{
  std::string s;
  int N;

  while (1)
  {
    cin >> N;
    if (N == -1)
      break;
    cout << N << checkPerfectNum(N) << endl;
  }
  return (0);
}

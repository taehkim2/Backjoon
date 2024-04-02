#include <iostream>
using namespace std;

long long *convertLineToNumSequence(string line, int N)
{
  long long *arr = new long long[N];

  for (int i = 0; i < N; i++)
    arr[i] = line[i] - 96;
  return (arr);
}

long long makeResult(long long *arr, int N)
{
  long long res = 0;
  long long r = 1;

  for (int i = 0; i < N; i++)
  {
    res = (res + (arr[i] * r)) % 1234567891;
    r = (r * 31) % 1234567891;
  }
  return (res);
}

int main(void)
{
  int N;
  long long *arr;
  string line;

  cin >> N >> line;
  arr = convertLineToNumSequence(line, N);
  cout << makeResult(arr, N) << "\n";
  delete arr;
  return (0);
}

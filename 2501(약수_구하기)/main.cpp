#include <iostream>
using namespace std;

int findKFactor(int N, int K)
{
  int cnt;

  cnt = 0;
  for (int i = 1; i <= N; i++)
  {
    if (N % i == 0)
      cnt++;
    if (cnt == K)
      return (i);
  }
  return (0);
}

int main(void)
{
  int N;
  int K;

  cin >> N;
  cin >> K;
  cout << findKFactor(N, K) << endl;
  return (0);
}

#include <iostream>
using namespace std;

int findComb(int N, int K)
{
  int N1 = N;
  int N2 = N - K;
  int K1 = K;
  int temp = 1;

  for (int i = 1; i <= N1; i++)
  {
    temp *= i;
  }
  N1 = temp;
  temp = 1;
  for (int i = 1; i <= N2; i++)
  {
    temp *= i;
  }
  N2 = temp;
  temp = 1;
  for (int i = 1; i <= K1; i++)
  {
    temp *= i;
  }
  K1 = temp;
  return (N1 / (N2 * K1));
}

int main(void)
{
  int N;
  int K;

  cin >> N >> K;
  cout << findComb(N, K) << endl;
  return (0);
}

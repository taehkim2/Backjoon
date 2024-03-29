#include <iostream>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  static int numOfPositive[10000001] = {0};
  static int numOfNegative[10000001] = {0};
  int N;
  int M;
  int x;

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> x;
    if (x >= 0)
      numOfPositive[x]++;
    else
      numOfNegative[x * -1]++;
  }
  cin >> M;
  for (int i = 0; i < M; i++)
  {
    cin >> x;
    if (x >= 0)
      cout << numOfPositive[x] << "\n";
    else
      cout << numOfNegative[x * -1] << "\n";
  }
}

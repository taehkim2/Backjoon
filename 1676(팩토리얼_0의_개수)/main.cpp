#include <iostream>
using namespace std;

int main(void)
{
  int N;
  int res;

  cin >> N;
  res = N / 5;
  res += N / 25;
  res += N / 125;
  cout << res << endl;
  return (0);
}
//   long long res;
//   int cnt;
//   res = N;
//   cnt = 0;
//   while (1)
//   {
//     N = N - 1;
//     if (N == 0)
//       break;
//     res *= N;
//   }
//   while (res % 10 == 0)
//   {
//     res /= 10;
//     cnt++;
//   }
//   cout << cnt << endl;
//   return (0);

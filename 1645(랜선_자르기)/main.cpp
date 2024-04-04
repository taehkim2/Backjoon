#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
  int N, K;
  long long left;
  long long mid;
  long long right;
  long long len;
  long long res;
  long long sum;
  vector<long long> v;

  cin >> K >> N;
  for (int i = 0; i < K; i++)
  {
    cin >> len;
    v.push_back(len);
  }
  left = 1;
  right = *max_element(v.begin(), v.end());
  while (left <= right)
  {
    mid = (left + right) / 2;
    sum = 0;
    for (int i = 0; i < K; i++)
    {
      sum += (v[i] / mid);
    }
    if (sum >= N)
    {
      res = mid;
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }
  }
  cout << res;
  return (0);
}

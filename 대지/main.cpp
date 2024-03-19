#include <iostream>
using namespace std;

int findMax(int N, int *arr)
{
  int result;

  result = arr[0];
  for (int i = 0; i < N; i++)
  {
    if (result < arr[i])
      result = arr[i];
  }
  return (result);
}

int findMin(int N, int *arr)
{
  int result;

  result = arr[0];
  for (int i = 0; i < N; i++)
  {
    if (result > arr[i])
      result = arr[i];
  }
  return (result);
}

int showRectangleArea(int N)
{
  int x[N];
  int y[N];
  int resX[2];
  int resY[2];
  int result;

  for (int i = 0; i < N; i++)
    cin >> x[i] >> y[i];
  if (N == 1)
    return (0);
  resX[0] = findMin(N, x);
  resY[0] = findMin(N, y);
  resX[1] = findMax(N, x);
  resY[1] = findMax(N, y);
  result = (resX[1] - resX[0]) * (resY[1] - resY[0]);
  return (result);
}

int main(void)
{
  int N;

  cin >> N;
  cout << showRectangleArea(N) << endl;
  return (0);
}

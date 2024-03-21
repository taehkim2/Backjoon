#include <iostream>
using namespace std;

int findRes(int arr[3])
{
  if (arr[1] == arr[2])
    return (arr[0]);
  if (arr[0] == arr[2])
    return (arr[1]);
  return (arr[2]);
}

int main(void)
{
  int x[3];
  int y[3];

  for (int i = 0; i < 3; i++)
    cin >> x[i] >> y[i];
  cout << findRes(x) << " " << findRes(y) << endl;
}

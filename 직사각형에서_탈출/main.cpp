#include <iostream>
using namespace std;

int main(void)
{
  int x;
  int y;
  int w;
  int h;
  int distance[4];
  int result;

  cin >> x >> y >> w >> h;

  distance[0] = w - x;
  distance[1] = x - 0;
  distance[2] = h - y;
  distance[3] = y - 0;
  result = distance[0];
  for (int i = 0; i < 4; i++)
  {
    if (result > distance[i])
      result = distance[i];
  }
  cout << result << endl;
}

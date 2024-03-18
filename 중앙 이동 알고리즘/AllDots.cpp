#include <iostream>
using namespace std;

int main(void)
{
  int leftDotsCnt;
  int drawDot;
  int N;

  leftDotsCnt = 2;
  drawDot = 1;
  cin >> N;
  while (N--)
  {
    leftDotsCnt += drawDot;
    drawDot *= 2;
  }
  cout << leftDotsCnt * leftDotsCnt << endl;
  return (0);
}

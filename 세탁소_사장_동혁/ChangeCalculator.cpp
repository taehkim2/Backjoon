#include <iostream>
using namespace std;

int changePennyCnt(int &change)
{
  int penny = 1;
  int pennyCnt = 0;

  while (1)
  {
    if (change < penny)
      break;
    change -= penny;
    pennyCnt++;
  }
  return (pennyCnt);
}

int changeNickelCnt(int &change)
{
  int nickel = 5;
  int nickelCnt = 0;

  while (1)
  {
    if (change < nickel)
      break;
    change -= nickel;
    nickelCnt++;
  }
  return (nickelCnt);
}

int changeDimeCnt(int &change)
{
  int dime = 10;
  int dimeCnt = 0;

  while (1)
  {
    if (change < dime)
      break;
    change -= dime;
    dimeCnt++;
  }
  return (dimeCnt);
}

int changeQuartorCnt(int &change)
{
  int quartor = 25;
  int quartorCnt = 0;

  while (1)
  {
    if (change - quartor < 0)
      break;
    change -= quartor;
    quartorCnt++;
  }
  return (quartorCnt);
}

int main(void)
{
  int changeCnt;
  int change;

  cin >> changeCnt;
  while (changeCnt--)
  {
    cin >> change;
    cout << changeQuartorCnt(change) << " ";
    cout << changeDimeCnt(change) << " ";
    cout << changeNickelCnt(change) << " ";
    cout << changePennyCnt(change) << " ";
    cout << endl;
  }
  return (0);
}

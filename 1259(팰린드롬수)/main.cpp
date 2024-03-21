#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  std::string num;
  std::string revNum;

  while (1)
  {
    cin >> num;
    if (num == "0")
      break;
    revNum = num;
    reverse(revNum.begin(), revNum.end());
    if (num == revNum)
      cout << "yes\n";
    else
      cout << "no\n";
  }
}

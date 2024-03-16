#include <iostream>
#include <string>
using namespace std;

std::string convertBase(std::string N, int B)
{
  std::string base = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  std::string result;
  long long num = std::stoi(N);

  if (num == 0)
    return ("0");
  while (num != 0)
  {
    result = base[num % B] + result;
    num = num / B;
  }
  return (result);
}

int main(void)
{
  std::string N;
  int B;

  cin >> N >> B;
  cout << convertBase(N, B);
  return (0);
}

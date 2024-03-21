#include <cstdio>
#include <iostream>
using namespace std;

long long devideReverse(long quotient, long remainder, long B) { return (quotient * B + remainder); }

long long makeQuotientAndRemainder(char c)
{
  if (c >= '0' && c <= '9')
    return (c - 48);
  else if (c >= 'A' && c <= 'Z')
    return (c - 55);
  return (0);
}

long long convertBase(string N, int B)
{
  long long result = 0;
  long long quotient = 0;
  long long remainder = 0;
  long long len = N.length();

  quotient = makeQuotientAndRemainder(N[0]);
  if (len == 1)
    return (quotient);
  else
  {
    remainder = makeQuotientAndRemainder(N[1]);
    result = devideReverse(quotient, remainder, B);
  }
  for (long long i = 2; i < len; i++)
  {
    quotient = result;
    remainder = makeQuotientAndRemainder(N[i]);
    result = devideReverse(quotient, remainder, B);
  }
  return (result);
}

int main()
{
  string N;
  int B;

  cin >> N;
  cin >> B;
  cout << convertBase(N, B) << endl;
  return (0);
}

// B진법 N이 주어진다.
// N을 10진법으로 출력하는 프로그램.
// 10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다.
// 이런 경우는 알파벳 대문자를 사용함.

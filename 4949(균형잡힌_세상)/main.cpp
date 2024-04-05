#include <iostream>
using namespace std;

bool findParentheses(string str, size_t &i);
bool findSquareBracket(string str, size_t &i);

bool findSquareBracket(string str, size_t &i)
{
  i++;
  if (str[i] == ')')
    return (true);
  else if (str[i] == ']' || str[i] == '\0')
    return (false);
  else if (str[i] == '(')
  {
    if (findSquareBracket(str, i) == false)
    {
      return (false);
    }
  }
  else if (str[i] == '[')
  {
    if (findParentheses(str, i) == false)
    {
      return (false);
    }
  }
  return (findSquareBracket(str, i));
}

bool findParentheses(string str, size_t &i)
{
  i++;
  if (str[i] == ']')
    return (true);
  else if (str[i] == ')' || str[i] == '\0')
    return (false);
  else if (str[i] == '(')
  {
    if (findSquareBracket(str, i) == false)
    {
      return (false);
    }
  }
  else if (str[i] == '[')
  {
    if (findParentheses(str, i) == false)
    {
      return (false);
    }
  }
  return (findParentheses(str, i));
}

int main(void)
{
  string str;
  int flg;

  while (1)
  {
    flg = 1;
    getline(cin, str);
    if (str == ".")
    {
      break;
    }
    for (size_t i = 0; str[i] != '\0'; i++)
    {
      if (str[i] == '(')
      {
        if (findSquareBracket(str, i) == true)
          flg = 1;
        else
        {
          flg = 0;
          break;
        }
      }
      else if (str[i] == ')')
      {
        flg = 0;
        break;
      }
      else if (str[i] == '[')
      {
        if (findParentheses(str, i) == true)
          flg = 1;
        else
        {
          flg = 0;
          break;
        }
      }
      else if (str[i] == ']')
      {
        flg = 0;
        break;
      }
    }
    if (flg == 1)
      cout << "yes\n";
    else
      cout << "no\n";
  }
}

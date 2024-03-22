#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

struct Person
{
  std::string name;
  int age;
};

bool compare(const Person &now, const Person &last)
{
  if (now.age != last.age)
    return now.age < last.age;
  return false;
}

int main(void)
{
  int N;

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> N;

  Person people[N];

  for (int i = 0; i < N; i++)
  {
    cin >> people[i].age >> people[i].name;
  }
  stable_sort(people, people + N, compare);
  for (int i = 0; i < N; i++)
  {
    cout << people[i].age;
    cout << " " << people[i].name << "\n";
  }
  return (0);
}

#include <iostream>
using namespace std;

struct Person
{
  Person *next;
  int num;
};

Person *initList(int N)
{
  Person *head;
  Person *last;

  head = new Person;
  last = head;
  for (int i = 1; i <= N; i++)
  {
    last->num = i;
    if (i != N)
    {
      last->next = new Person;
      last = last->next;
    }
  }
  last->next = head;
  return (last);
}

void deleteNode(Person *prev, Person *node)
{
  prev->next = node->next;
  delete node;
}

void josephusProblem(int N, int K)
{
  Person *now = initList(N);
  Person *prev;
  int cnt = 0;

  cout << "<";
  while (1)
  {
    if (cnt == N - 1)
    {
      cout << now->num;
      delete now;
      break;
    }
    for (int i = 0; i < K; i++)
    {
      prev = now;
      now = now->next;
    }
    cout << now->num << ", ";
    deleteNode(prev, now);
    now = prev;
    cnt++;
  }
  cout << ">" << endl;
}

int main(void)
{
  int N;
  int K;

  cin >> N >> K;
  josephusProblem(N, K);
  return (0);
}

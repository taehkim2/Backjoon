#include <iostream>
#include <queue>
using namespace std;

void input(queue<pair<int, int> > &q, priority_queue<int> &pq, int N)
{
  int importance;

  for (int i = 0; i < N; i++)
  {
    cin >> importance;
    q.push(make_pair(i, importance));
    pq.push(importance);
  }
}

void findOrder(queue<pair<int, int> > &q, priority_queue<int> &pq, int order)
{
  int cnt = 0;
  int _location;
  int value;

  while (!q.empty())
  {
    _location = q.front().first;
    value = q.front().second;
    q.pop();

    if (pq.top() == value)
    {
      pq.pop();
      cnt++;
      if (order == _location)
      {
        cout << cnt << "\n";
        break;
      }
    }
    else
      q.push(make_pair(_location, value));
  }
}

int main(void)
{
  int testN;
  int N, location;

  cin >> testN;
  for (int i = 0; i < testN; i++)
  {
    cin >> N >> location;
    queue<pair<int, int> > q;
    priority_queue<int> pq;

    input(q, pq, N);
    findOrder(q, pq, location);
  }
}

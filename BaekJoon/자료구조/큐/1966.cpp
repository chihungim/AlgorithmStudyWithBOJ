#include <iostream>
#include <queue>

using std::cin;
using std::cout;
using std::priority_queue;
using std::queue;

int main(int argc, char* argv[])
{
	int t = 0;
	cin >> t;
	
	while (t--)
	{
		int n = 0, m = 0; //n-> 문서의 개수, m-> 현재 문서의 위치
		cin >> n >> m;
		queue<std::pair<int, int>>q;
		priority_queue<int> pq;
		for(int i = 0; i<n; i++)
		{
			int val;
			cin >> val;
			q.push({i,val});
			pq.push(val);
		}
		int cnt = 0.;
		while(!q.empty())
		{
			int idx = q.front().first;
			int v = q.front().second;
			q.pop();
			if (pq.top() == v)
			{
				pq.pop();
				cnt++;
				if(idx == m)
				{
					cout << cnt << "\n";
					break;
				}
			}
			else
				q.push({ idx, v });
		}
	}
}

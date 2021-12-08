#include <queue>
#include <iostream>

using namespace std;

//void queCon(queue<int> q)
//{
//	while(!q.empty())
//	{
//		cout << q.front() << " ";
//		q.pop();
//	}
//	cout << "\n";
//}

int main(int argc, char* argv[])
{
	queue<int> que;
	int n = 0, k = 0;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		que.push(i+1);
	int idx = 0;

	cout << "<";
	
	while(!que.empty())
	{
		for(int i = 0; i<k-1; i++)
		{
			que.push(que.front());
			que.pop();
		}
		//queCon(que);
		cout << que.front() <<  (que.size() != 1 ? ", ": "");
		que.pop();
	}

	cout << ">";
}


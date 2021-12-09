#include <queue>
#include <iostream>

using namespace std;

//todo: watch this code one more

int main(int argc, char* argv[])
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	priority_queue<int, vector<int>, greater<int>> min;
	priority_queue<int, vector<int>, less<int>> max;

	//오름차순 우선순위 큐와 내림차순 우선순위 큐
	
	int n = 0;
	cin >> n;
	for(int i = 0; i<n; i++)
	{
		int x;
		cin >> x;
		if (max.size() > min.size()) min.push(x); //두 큐는 1씩 차이가 나야함 (중앙값 구하기)
		else max.push(x);
		if(!max.empty() && ! min.empty())
		{
			if(max.top() > min.top())
			{
				int m = max.top();
				int n = min.top();
				max.pop();
				min.pop();

				max.push(n);
				min.push(m);
			}
		}
		cout << max.top() << "\n";
	}
}

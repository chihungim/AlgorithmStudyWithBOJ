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

	//�������� �켱���� ť�� �������� �켱���� ť
	
	int n = 0;
	cin >> n;
	for(int i = 0; i<n; i++)
	{
		int x;
		cin >> x;
		if (max.size() > min.size()) min.push(x); //�� ť�� 1�� ���̰� ������ (�߾Ӱ� ���ϱ�)
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

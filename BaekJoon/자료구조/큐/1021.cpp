#include <iostream>
#include <deque>
#include <vector>

using namespace std;

void showDQ(deque<int> dq);

int main(int argc, char* argv[])
{
	int n, m;
	cin >> n >> m;
	//1 //2 //3;

	deque<int> dq;
	deque<int> dq1;
	deque<int> dq2;
	
	for (int i = 1; i <= n; i++)
		dq.push_back(i);


	
	int sum = 0;

	while(m--)
	{
		dq1 = dq;
		dq2 = dq;
		int right = 0;
		int left = 0;
		int val;
		cin >> val;
	
		
		while(dq1.front() != val)
		{
			int v = dq1.front();
			dq1.push_back(v);
			dq1.pop_front();
			left++;
		}

		dq1.pop_front();
		
		while (dq2.front() != val)
		{
			int v = dq2.back();
			dq2.push_front(v);
			dq2.pop_back();
			right++;
		}
		
		dq2.pop_front();
		
		if (left > right)
		{
			sum += right;
			dq = dq1;
		}
		else
		{
			sum += left;
			dq = dq2;
		}
	}

	cout << sum << "\n";
}

void showDQ(deque<int> dq)
{
	cout << "----------------------\n";
	while(!dq.empty())
	{
		cout << dq.front() << " ";
		dq.pop_front();
	}
	cout << "\n";
}

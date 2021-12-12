#include <queue>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, k;

	queue<int> q;
	cin >> n >> k;
	
	for(int i = 1; i<=n; i++)
		q.push(i);

	cout << "<";

	
	while(!q.empty())
	{
		for(int i = 0; i<k-1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << (q.size() == 1 ? ""  : ", ");
		
		q.pop();
	}

	cout << ">";

	return 0;
}

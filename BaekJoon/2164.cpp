#include <queue>
#include <iostream>

using std::queue;
using std::cin;
using std::cout;

int main(int argc, char* argv[])
{
	queue<int> que;
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
		que.push(i);

	while(que.size() != 1)
	{
		que.pop();
		que.push( que.front());
		que.pop();
	}

	cout << que.front();

}

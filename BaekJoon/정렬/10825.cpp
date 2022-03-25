#include <queue>
#include <iostream>
#include <tuple>
#include <functional>

using namespace std;

int main(int argc, char* argv[])
{
	typedef tuple<string, int, int, int> score;

	priority_queue<score, vector<score>, function<bool(const score& a, const score& b)>> pq([](const score& a, const score& b)
		{
			string aName = get<0>(a), bName = get<0>(b);
			int aLang = get<1>(a), bLang = get<1>(b), aEng = get<2>(a), bEng = get<2>(b), aMath = get<3>(a), bMath = get<3>(b);
			if (aLang == bLang)
				if (aEng == bEng)
					if (aMath == bMath)
						return aName > bName;
					else return aMath < bMath;
				else return aEng > bEng;
			else return aLang < bLang;
		});

	int n;
	cin >> n;
	for(int i = 0; i<n; i++)
	{
		string name;
		int a, b, c;
		cin >> name; cin >> a >> b >> c;
		pq.push({ name, a, b, c });
	}

	while(!pq.empty())
	{
		cout << get<0>(pq.top()) << "\n";
		pq.pop();
	}

	return 0;
}

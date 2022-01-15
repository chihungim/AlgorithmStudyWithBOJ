#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{

	int n, new_score, p;
	cin >> n >> new_score >> p;
	vector<int> scores(n);

	for (auto& s : scores)
		cin >> s;
	
	scores.push_back(new_score);

	sort(scores.begin(), scores.end(), greater<int>());

	int rank = 0, idx;

	
	for(idx = 0; idx<scores.size(); idx++)
	{
		rank = idx + 1;
		while (idx + 1 < scores.size() && scores[idx + 1] == scores[idx])
			idx++;

		if (scores[idx] == new_score)
			break;
	}
	
	if (idx < p)
		cout << rank;
	else
		cout << -1;
	
	return 0;
}

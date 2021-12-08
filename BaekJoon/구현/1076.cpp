#include <iostream>
#include <map>

using namespace std;
//black	brown	red	orange	yellow	green	blue	violet	grey	white

int main()
{
	map<string, int> mm;
	mm.insert(make_pair("black", 1));
	mm.insert(make_pair("brown", 10));
	mm.insert(make_pair("red",	100));
	mm.insert(make_pair("orange",1000));
	mm.insert(make_pair("yellow",10000));
	mm.insert(make_pair("green", 100000));
	mm.insert(make_pair("blue",	1000000));
	mm.insert(make_pair("violet",10000000));
	mm.insert(make_pair("grey",	100000000));
	mm.insert(make_pair("white",	1000000000));

	map<string, int> am;
	am.insert(make_pair("black", 0));
	am.insert(make_pair("brown", 1));
	am.insert(make_pair("red", 2));
	am.insert(make_pair("orange", 3));;
	am.insert(make_pair("yellow", 4));
	am.insert(make_pair("green", 5));
	am.insert(make_pair("blue", 6));
	am.insert(make_pair("violet", 7));
	am.insert(make_pair("grey", 8));
	am.insert(make_pair("white", 9));

	long long r = 0;

	for (int i = 0; i < 3; i++)
	{
		string input = "";
		cin >> input;
		if (i < 2)
		{
			if (i == 0)
				r = static_cast<long long>(am.at(input)) * 10;
			else
				r += am.at(input);
		}
		else
		{
			r *= mm.at(input);
		}
	}

	cout << r << "\n";
	
}
#include <iostream>

using namespace std;

bool chk[1000001];

int main(int argc, char* argv[])
{
	long long min, max;
	cin >> min >> max;
	
	for(long long i = 2, pow, s; i*i <= max; i++)
	{
		pow = i * i; //반복문의 제곱수
		s = min - (min % pow); //거를꺼

		while(s <= max)
		{
			if (s >= min)
				chk[s - min] = true; //범위 내에서만
			s += pow;
		}
	}
	int cnt = 0;
	
	for(int i = 0; i<max-min+1; i++)
		if (!chk[i]) cnt++;

	cout << cnt;
    return 0;
}

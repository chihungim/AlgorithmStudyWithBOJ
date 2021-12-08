#include <iostream>

using namespace std;

bool chk[1000001];

int main(int argc, char* argv[])
{
	long long min, max;
	cin >> min >> max;
	
	for(long long i = 2, pow, s; i*i <= max; i++)
	{
		pow = i * i; //�ݺ����� ������
		s = min - (min % pow); //�Ÿ���

		while(s <= max)
		{
			if (s >= min)
				chk[s - min] = true; //���� ��������
			s += pow;
		}
	}
	int cnt = 0;
	
	for(int i = 0; i<max-min+1; i++)
		if (!chk[i]) cnt++;

	cout << cnt;
    return 0;
}

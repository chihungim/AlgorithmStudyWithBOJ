#include <iostream>
#include <cstdint>

using namespace std;

/*
 * �����̴� �⸻��縦 ���ƴ�. �����̴� ������ �����ؼ� ���� ��������� �ߴ�. �ϴ� �����̴� �ڱ� ���� �߿� �ִ��� �����. �� ���� M�̶�� �Ѵ�. �׸��� ���� ��� ������ ����/M*100���� ���ƴ�.

���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� ���������� 50/70*100�� �Ǿ� 71.43���� �ȴ�.

�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 */

int main()
{
	unsigned int n = 0;
	double m = 0, avg = 0, sum = 0;

	cin >> n;
	
	auto* scores = new double[n];
	
	for(unsigned int i = 0; i<n; i++)
	{
		cin >> scores[i];
		if (m <= scores[i])
			m = scores[i];
	}
	
	for(int j = 0; j<n; j++)
	{
		scores[j] = (scores[j] / m) * 100;
		sum += scores[j];
	}
	
	avg = sum / n;

	cout.precision(1000000);
	
	cout << avg;

	delete(scores);

	return 0;
}
#include <iostream>
#include <cstdint>

using namespace std;

/*
 * 세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다. 일단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다. 그리고 나서 모든 점수를 점수/M*100으로 고쳤다.

예를 들어, 세준이의 최고점이 70이고, 수학점수가 50이었으면 수학점수는 50/70*100이 되어 71.43점이 된다.

세준이의 성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오.
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
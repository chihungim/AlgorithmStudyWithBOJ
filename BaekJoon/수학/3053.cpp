#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>
#include <numbers>
#include <format>
using namespace std;

int main(int argc, char* argv[])
{
	double a1, a2;
	double r;
	cin >> r;
	a1 = r *r * M_PI;
	a2 = r * 2 * r;
	
	cout << fixed <<a1 << "\n" << a2;
}

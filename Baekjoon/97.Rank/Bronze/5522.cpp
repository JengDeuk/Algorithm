#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int Sum = 0;
	for (int i = 0; i < 5; ++i)
	{
		int Num;
		cin >> Num;
		Sum += Num;
	}

	cout << Sum;
}
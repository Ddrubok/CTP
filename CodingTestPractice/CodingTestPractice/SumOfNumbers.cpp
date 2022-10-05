#include<iostream>

using namespace std;	

int main()
{
	long long S;

	cin >> S;

	long long  check=1;

	long long SumResult = 0;;
	while (1)
	{
		SumResult += check;
		if (SumResult > S)
		{
			check--;
			break;
		}
		check++;

	}
	cout << check;

	return 0;
}
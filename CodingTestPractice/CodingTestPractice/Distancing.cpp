#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n;
	cin >> n;

	vector<int> in(n);

	for (int i = 0; i < n; i++)
	{
		cin >> in[i];
	}

	vector<int> Lcheck(n);
	vector<int> Rcheck(n);

	int ch = 999999;

	for (int i = 0; i < n; i++)
	{

		if (in[i] == 1)
			ch = 0;
		
		Lcheck[i] = ch;
		ch += 1;
	}

	ch = 999999;

	for (int i = n - 1; i >= 0; i--)
	{
		if (in[i] == 1)
			ch = 0;

		Rcheck[i] = ch;
		ch += 1;
	}

	int result = 0;
	for (int i = 0; i < n; i++)
	{
		result = max(result, min(Rcheck[i], Lcheck[i]));
	}

	cout << result;
	return 0;
}


//10
//1 0 0 0 1 0 0 1 0 1

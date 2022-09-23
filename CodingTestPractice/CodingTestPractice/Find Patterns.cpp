#include<iostream>

using namespace std;

int main()
{
	string in;
	int n;

	cin >> in;
	cin >> n;
	int result = 0;

	for (int i = 3; i < in.size(); i++)
	{
		if (in.substr(0, i) == in.substr(i, i))
		{
			string asd = in.substr(0, i);
			int sum = 0;
			int num = n / i;
			int rest = n % i;
			for (int j = 0; j < i; j++)
			{
				sum += asd[j]-48;
			}
			result = sum * num;

			for (int j = 0; j < rest; j++)
			{
				result += asd[j] - 48;
			}
		}
	}
	cout << result;

	return 0;
}
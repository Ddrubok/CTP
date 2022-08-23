#include<iostream>
#include <vector>

using namespace std;
int main()
{
	string in;

	cin >> in;

	int result = 0;
	for (int i = 0; i < in.size(); i++)
	{
		int x = 0;
		while (in[i] >= '0' && in[i] <= '9')
		{
			x *= 10;
			x += in[i] - 48;
			i++;
		}
		result += x;
	}
	cout << result;

	return 0;
}


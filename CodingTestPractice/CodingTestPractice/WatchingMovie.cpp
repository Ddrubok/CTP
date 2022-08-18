#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> in(n+1);
	vector<int> result(n+1,0);

	for (int i = 1; i <= n; i++)
	{
		cin >> in[i];
	}

	stack<int> check;
	for (int i = n ; i > 0; i--)
	{
		while (!check.empty() && in[check.top()] < in[i])
		{
			result[check.top()] = i;
			check.pop();
		}
		check.push(i);
	}

	for (int i = 1; i <= n; i++)
	{
		cout << result[i] << ' ';
	}

	return 0;
}

//7
//54 52 57 50 52 53 51

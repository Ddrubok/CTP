#include <iostream>
#include<vector>
#include<stack>

using namespace std;
int main()
{
	int num;
	cin >> num;
	vector<int> check(num+1);
	for (int i = 1; i <= num; i++)
	{
		cin >> check[i];
	}
	vector<int> checknum(num+1);
	stack<int> in;
	vector<int> result(num+1,0);
	for (int i = num ; i > 0; i--)
	{
		while (!in.empty() && check[in.top()] < check[i])
		{
			result[in.top()] = i;
			in.pop();
		}
		in.push(i);
	}
	for (int i = 1; i <= num; i++)
	{
		cout << result[i] << " ";
	}
	return 0;
}

//7
//54 52 57 50 52 53 51



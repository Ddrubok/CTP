#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class student
{
public:
	int num;
	int pow;
	char team;

	bool operator < (const student& a)
	{
		return pow < a.pow;
	}

};

int main()
{

	int n;
	cin >> n;
	vector<student> in(n);
	unordered_map<char, int> check;
	vector<int> result(n, 0);
	for (int i = 0; i < n; i++)
	{

		cin >> in[i].team >> in[i].pow;

		in[i].num = i;
	}
	sort(in.begin(), in.end());
	int j = 0;
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		for (; j < n; j++)
		{
			if (in[i].pow > in[j].pow)
			{
				sum += in[j].pow;
				check[in[j].team] += in[j].pow;
			}
			else
				break;
		}
		result[in[i].num] += sum - check[in[i].team];
	}

	for (int i = 0; i < n; i++)
	{
		cout << result[i] << endl;
	}

	return 0;
}
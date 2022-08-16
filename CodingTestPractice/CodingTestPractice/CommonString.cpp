#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	int n;
	std::cin >> n;

	std::vector<std::string> in(n);

	int min = 100000;
	int num=0;

	std::string result;

	for (int i = 0; i < n; i++)
	{
		std::cin >> in[i];
		if (min > in[i].size())
		{
			min = in[i].size();
			num = i;
		}
	}

	for (int i = 0; i < min; i++)
	{
		std::unordered_map<char, int> check;
		for (int j = 0; j < n; j++)
		{
			check[in[j][i]]++;
		}

		if (check.size() > 1)
			break;

		result += in[0][i];
	}

	cout << result;
	return 0;
}

//3
//long
//longtime
//longest

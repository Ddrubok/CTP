#include <iostream>
#include <map>
#include<vector>

using namespace std;
int main()
{
	string in1, in2;

	map<char, int> check1,check2;
	cin >> in1 >> in2;

	int CheckStringSize = in2.size();

	for (int i = 0; i < CheckStringSize - 1; i++)
	{
		check1[in2[i]]++;
		check2[in1[i]]++;
	}

	check1[in2[CheckStringSize-1]]++;

	int result = 0;
	for (int i = CheckStringSize-1; i < in1.size(); i++)
	{
		check2[in1[i]]++;
		if (check1 == check2)
		{
			result++;
		}

		check2[in1[i - (CheckStringSize-1)]]--;
		if (check2[in1[i - (CheckStringSize - 1)]] == 0)
		{
			check2.erase(in1[i - (CheckStringSize - 1)]);
		}

	}

	cout << result;

	return 0;
}

//eabcbacade
//abc



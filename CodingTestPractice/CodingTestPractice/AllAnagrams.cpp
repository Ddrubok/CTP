#include <iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
	string in1;
	string in2;
	cin >> in1 >> in2;

	unordered_map<char, int> check1, check2;

	int in2size = in2.size()-1;
	for (int i = 0; i < in2size; i++)
	{
		check1[in1[i]]++;
	}

	for (int i = 0; i < in2size+1; i++)
	{
		check2[in2[i]]++;
	}
	int result = 0;

	for (int i = in2size; i < in1.size(); i++)
	{
		check1[in1[i]]++;
		if (check1 == check2)
			result++;

		check1[in1[i - in2size]]--;
		if (check1[in1[i - in2size]] <= 0)
			check1.erase(in1[i - in2size]);
	}

	cout << result;
	return 0;
}
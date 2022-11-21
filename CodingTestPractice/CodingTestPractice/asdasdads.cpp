#include <iostream>
#include<unordered_map>

using namespace std;
int main()
{
	string in, in2;
	unordered_map<char, int> check;
	unordered_map<char, int> original;
	
	cin >> in >> in2;
	int in2size = in2.size()-1;

	for (int i = 0; i < in2size; i++)
	{
		check[in[i]]++;
	}

	for (int i = 0; i < in2size + 1; i++)
	{
		original[in2[i]]++;
	}
	int result = 0;
	for (int i = in2size; i < in.size(); i++)
	{
		check[in[i]]++;

		if (original == check)
		{
			result++;
		}

		check[in[i - in2size]]--;

		if (check[in[i - in2size]] == 0)
		{
			check.erase(in[i - in2size]);
		}
		
	}

	cout << result;

	return 0;
}

//eabcbacade
//abc





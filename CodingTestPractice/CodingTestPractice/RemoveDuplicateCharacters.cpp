#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main()
{
	string in;
	unordered_map<char, int > check;

	cin >> in;

	transform(in.begin(), in.end(), in.begin(), toupper);

	for (int i = 0; i < in.size(); i++)
	{
		if (in[i] >= 97)
		{
			in[i] -= 32;
		}
		check[in[i]]++;

	}

	for (int i = 0; i < in.size(); i++)
	{
		if(
	}

	return 0;
}
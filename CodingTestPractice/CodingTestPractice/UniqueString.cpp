#include<iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	int n; 
	char c;
	cin >> n>>c;


	if (c >= 97)
	{
		c -= 32;
	}

	vector<string> in(n);
	vector<string> out;

	for (int i = 0; i < n; i++)
	{
		cin >> in[i];

		bool b = false;
		for (int j = 0; j < in[i].size(); j++)
		{
			if (in[i][j] >= 97)
				in[i][j] -= 32;

			if (in[i][j] == c)
				b = true;
		}

		if (b == true)
		{
			out.push_back(in[i]);
		}
	}
	vector<string> result(out.size());
	for (int i = 0; i < out.size(); i++)
	{
		unordered_map<char, int> check;
		string a="";

		for (int j = 0; j < out[i].size(); j++)
		{
			check[out[i][j]]++;

			if (check[out[i][j]] == 1)
			{
				a += out[i][j];
			}
		}
		cout << a << endl;
	}
	
	



	return 0;
}

//5 b
//Queen
//Apple
//Best
//Remember
//Beer

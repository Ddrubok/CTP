#include <iostream>
#include <set>
#include <map>

using namespace std;	
int main()
{
	int N;

	cin >> N;

	set<int> check[3];

	map<int, int, greater<int>> result;
	
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < N; i++)
		{
			int a;
			cin >> a;
			set<int>::iterator iter = check[j].find(a);
			if (check[j].end()== iter)
			{
				result[a]++;
				check[j].insert(a);
			}
		}
	}

	for (auto& a : result)
	{
		if (a.second == 3)
		{
			cout << a.first;
			return 0;
		}
	}
	cout << -1;
	return 0;
	
}
//10
//39 31 32 75 75 7 89 21 7 67
//4 19 52 75 35 100 4 26 24 69
//82 53 22 64 58 80 94 75 51 69

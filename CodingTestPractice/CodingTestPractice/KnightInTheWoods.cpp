#include<iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };

int main()
{
	int w, h;
	cin >> w >> h;

	vector<vector<int>> in(h, vector<int>(w));

	pair<int, int> young, knight;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> in[i][j];

			if (in[i][j] == 2)
			{
				young.first = j;
				young.second = i;
			}

			if (in[i][j] == 3)
			{
				knight.first = j;
				knight.second = i;
			}

		}
	}

	vector<vector<int>> ycheck(in);
	vector<vector<int>> kcheck(in);

	queue<pair<int, int>> check;

	check.push(young);

	while (!check.empty())
	{
		int x = check.front().first;
		int y = check.front().second;

		for (int i = 0; i < 4; i++)
		{
			int xx = x;
			int yy = y;

			if(xx+dx[i]>=0&& xx+dx[i]<=w && yy + dy[i] >= 0 && yy + dy[i] <= h&& in[yy+dy[i]][xx+dx[i]]==0 ||)

		}
	}

	return 0;
}

//8 4
//4 1 0 0 0 0 1 0
//0 0 0 1 0 1 0 0
//0 2 1 1 3 0 4 0
//0 0 0 4 1 1 1 0

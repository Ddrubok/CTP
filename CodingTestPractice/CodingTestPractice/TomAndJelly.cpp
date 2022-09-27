#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0 ,1,-1 };

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> in(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> in[i][j];
		}
	}

	int sx, sy;
	int ex, ey;
	cin >> sx >> sy;
	cin >> ex >> ey;

	queue<pair<int, int>> checkQue;

	checkQue.push({ --sx,--sy });

	in[sx][sy] = 2;

	while (!checkQue.empty())
	{
		int x = checkQue.front().first;
		int y = checkQue.front().second;
		checkQue.pop();

		for (int i = 0; i < 4; i++)
		{
			int xx = x;
			int yy = y;

			while (!(xx + dx[i] < 0 || xx + dx[i] >= n || yy + dy[i] < 0 || yy + dy[i] >= n) && in[xx + dx[i]][yy + dy[i]] != 1)
			{
				xx += dx[i];
				yy += dy[i];

				if (in[xx][yy] == 0 || in[x][y] + 1 < in[xx][yy])
				{
					in[xx][yy] = in[x][y] + 1;
					checkQue.push({ xx,yy });
				}





			}
		}
	}

	if (in[ex - 1][ey - 1] == 0)
	{
		cout << -1;
		return 0;
	}
	cout << in[ex - 1][ey - 1] - 3;
	return 0;
}
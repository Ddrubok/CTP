#include <iostream>
#include<queue>
#include<list>
using namespace std;

int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };

int board[1001][1001], dis[2][1001][1001];

queue<pair<int, int>> Q;

int w, h;
int main()
{
    cin >> w >> h;

    pair<int, int > StartPosition;
    pair<int, int > knigtPosition;

    list<int> check;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> board[i][j];

            if (board[i][j] == 2)
            {
                StartPosition = { j,i };
            }
            else if (board[i][j] == 3)
            {
                knigtPosition = { j,i };
            }
        }
    }
    Q.push(StartPosition);

    while (!Q.empty())
    {
        int x = Q.front().first;
        int y = Q.front().second;

    }

   
    return 0;
}

//8 4
//4 1 0 0 0 0 1 0
//0 0 0 1 0 1 0 0
//0 2 1 1 3 0 4 0
//0 0 0 4 1 1 1 0

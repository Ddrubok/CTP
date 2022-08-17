#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	int W, H, N, S;

	cin >> W >> H >> N >> S;

	vector<pair<int, int>> in(N);
	for (int i = 0; i < N; i++)
	{
		cin >> in[i].first >> in[i].second;
	}
	int result = -1;
	
	for (int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			int check = 0;
			for (int k = 0; k < N; k++)
			{
				
				if (in[i].first <= in[k].first && in[i].first+S >= in[k].first)
				{
					if (in[j].second <= in[k].second && in[j].second + S >= in[k].second)
					{
						check++;
					}
				}
			}
			result = max(result, check);
			
		}
	}
	cout << result;
	return 0;
}

//10 9 8 3
//3 4
//6 3
//5 7
//6 6
//9 5
//6 9
//7 8
//8 9
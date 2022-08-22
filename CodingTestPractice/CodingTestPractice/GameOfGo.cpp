#include<iostream>
#include<vector>

using namespace std;
int num;
int in[16][2];
bool check[16];
int result = 100000;


void DFS(int n, int k)
{
	if (num / 2 == n)
	{
		int A = 0;
		int B = 0;

		for (int i = 0; i < num; i++)
		{
			if (check[i] == true)
			{
				A += in[i][0];
			}
			else
			{
				B += in[i][1];
			}
		}
		result = min(abs(A - B), result);
	}
	else
	{
		for (int i = k; i < num; i++)
		{
			check[i] = true;
			DFS(n + 1, i+1);
			check[i] = false;
		}
	}
}

int main()
{
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> in[i][0] >> in[i][1];
	}

	DFS(0, 0);

	cout << result;

	return 0;
}


//6
//87 84
//66 78
//94 94
//93 87
//72 92
//78 63

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;

	cin >> n;

	vector<int> t(n + 1);

	for (int i = 1; i <= n; i++)
	{
		cin >> t[i];
	}

	sort(t.begin(), t.end());

	int res = 0, i;

	for (i = n; i >= n; i -= 2)
	{
		res += min(t[1] + t[i] + t[i - 1] + t[1], t[2] + t[2] + t[i] + t[1]);
	}

	if (i == 3) res += t[1] + t[2] + t[3];
	if (i == 2) res += t[2];
	if (i == 1) res += t[1];

	cout << res;

	return 0;
}

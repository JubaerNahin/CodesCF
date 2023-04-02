#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, X = 0;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s[1] == '+')
			X += 1;
		else X -= 1;
	}

	cout << X << endl;
	return 0;
}

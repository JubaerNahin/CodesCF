#include <bits/stdc++.h>
#define pi acos(-1.0)
#define ll long long
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
#define ui_mx UINT_MAX
#define ll_mn LLONG_MIN
#define ll_mx LLONG_MAX
#define ull_mx LLONG_MAX
#define fst first
#define sec second
#define beg begin
#define des greater < > ()
#define p_b push_back
#define u_b upper_bound
#define l_b lower_bound
#define n_p next_permutation
#define p_p prev_permutation
#define nl cout << endl
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define getln(s) getline(cin, s)
#define point(x, d) fixed << setprecision(d) << x
#define mem(ar, v) memset(ar, v, sizeof(ar))
#define inc(x, s, e, i) for (ll x = s; x < e; x += i)
#define dec(x, s, e, d) for (ll x = s; x >= e; x -= d)
#define sz 101
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	unordered_map<string, int> m;
	inc(i, 0, n, 1)
	{
		cin >> s;
		if (m[s]==1) cout << s << m[s] << endl;
		else cout << "Ok\n";
		m[s]++;
	}
}
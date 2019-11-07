
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second

#define mod 1000000007

ll mini[200000], a[200000], c[200000], ans[200000];
pair <ll, ll> cs[200000];


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);


    ll n, m, i, j, k = 0, t, d;
	cin >> n >> m;
	for(i = 0; i < n; cs[i].s = i, i++)
		cin >> a[i];
	for(i = 0; i < n; cs[i].f = c[i], i++)
		cin >> c[i];
	sort(cs, cs + n);
	for(i = 0; i < n; i++)
		mini[i] = cs[i].s;
	for(i = 0; i < m; i++)
	{
		cin >> t >> d;
		t--;
		if(a[t] >= d)
		{
			ans[i] = d * c[t];
			a[t] -= d;
			continue;
		}
		else
		{
			ans[i] = a[t] * c[t];
			d -= a[t];
			a[t] = 0;
			for(; d >= a[mini[k]] && k < n; k++)
			{
				d -= a[mini[k]];
				ans[i] += a[mini[k]] * c[mini[k]];
				a[mini[k]] = 0;
			}
			if(k < n)
			{
				if(d <= a[mini[k]])
					a[mini[k]] -= d, ans[i] += d * c[mini[k]];
				else
					ans[i] = 0;
			}
			else
				if(d != 0)
					ans[i] = 0;
		}
	}
	for(i = 0; i < m; i++)
		cout << ans[i] <<endl;

}

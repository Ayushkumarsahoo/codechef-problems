#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<ii> vii;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define fr(be, en) for(int i = be; i <= en; i++)
ll mod = LLONG_MAX;
ll power(ll a, ll b)
{
	if(b == 0) return 1;
	ll ans = power(a, b/2);
	ans = (ans*ans)%mod;
	if(b%2) ans*=a;
	return ans%mod;
}
ll mul(ll a,ll n, ll mod)
{
	ll ret;
	if(n==0) return 0;
	ret = mul(a,n/2, mod);
	ret = (ret+ret)%mod;
	if(n%2)	ret=(ret+a)%mod;
	return ret;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int t, n, val;
	cin >> t;
	while(t--){
		cin >> n;
		vector<ll> v(n);
		for(ll i = 0; i < n; i++) cin >> v[i];
		vector<ll> chosen;
		ll idx = n - 1;
		for(ll i = 0; i < n; i++){
			if(v[i] > 0) continue;
			else{
				while(idx > i && v[idx] <= 0) idx--;
				if(idx <= i) break;
				else{
					swap(v[i], v[idx]);
					chosen.push_back(i);
					chosen.push_back(idx);
					idx--;
				}
			}
		}
		if(!chosen.empty()) sort(chosen.begin(), chosen.end());
		ll sum = 0;
		for(ll i = 0; i < n; i++) {
			if(v[i] < 0) break;
			sum += v[i];
		}
		cout << sum << "\n";
		cout << chosen.size() << " ";
		for(ll i = 0; i < chosen.size(); i++) cout << chosen[i] + 1 << " ";
		cout << "\n";
	}
}

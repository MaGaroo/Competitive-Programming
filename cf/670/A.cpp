//sobskdrbhvk
#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;

#define PB push_back
#define MP make_pair
#define L first
#define R second
#define sz(x) ((int)(x).size())
#define smax(x, y) ((x) = max((x), (y)))
#define smin(x, y) ((x) = min((x), (y)))
#define all(x) x.begin(),x.end()

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = n / 7 * 2;
	n %= 7;
	if(n == 0)
		cout << ans << ' ' << ans;
	else if(n == 1)
		cout << ans << ' ' << ans+1;
	else if(n <= 5)
		cout << ans << ' ' << ans+2;
	else
		cout << ans + 1 << ' ' << ans+2;
	return 0;
}

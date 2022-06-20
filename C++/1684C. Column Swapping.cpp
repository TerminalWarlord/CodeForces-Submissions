// Author : TerminalWarlord - Joy Biswas
// Date   : 20.05.2022

#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define endl "\n"
#define pb push_back
#define po pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rep(i,x,n) for(ll i=x;i<n;i++)
#define repb(i,n,x) for(ll i=n;i>=x;i--)
#define ta " "

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef stringstream ss;
typedef unordered_map<int, int> umii;
typedef unordered_map<ll, int> umli;
typedef unordered_map<char, int> umci;
typedef unordered_map<string, int> umsi;
typedef unordered_map<int, vector<int>> umivi;
typedef map<int, int> mii;
typedef map<ll, int> mli;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, vector<int>> mivi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef set<int> seti;
typedef set<ll> setl;
typedef set<char> setc;
typedef set<string> sets;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pll> vpll;
typedef map<int, int>::iterator miit;
typedef map<ll, ll>::iterator mllit;
typedef map<char, int>::iterator mciit;
typedef map<string, int>::iterator msiit;
typedef vector<int>::iterator viit;
typedef vector<ll>::iterator vlit;
typedef vector<char>::iterator vcit;
typedef vector<string>::iterator vsit;

void init_code() {
	fastio();
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << nline;
#else
#define debug(x)
#endif
}


void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}



bool okay(vector<vector<ll>> &arr) {
	rep(i, 0, sz(arr)) {
		rep(j, 0, sz(arr[i]) - 1) {
			if (arr[i][j] > arr[i][j + 1]) return false;
		}
	}
	return true;
}

void solve() {
	ll n, m;
	cin >> n >> m;
	vector<vector<ll>> arr(n, vector<ll> (m));
	vector<ll> sortArr;
	// for (auto&it : arr) {
	// 	for (auto&x : it) {
	// 		cin >> x;
	// 	}
	// }

	pair<ll, ll> ans = {0, 0};
	int ok = 1;
	ll l = -1, r = -1;
	rep(i, 0, n) {
		rep(j, 0, m) {
			cin >> arr[i][j];
		}
	}
	if (okay(arr)) {
		cout << "1 1" << endl;
		return;
	}

	rep(i, 0, n) {
		// multimap<ll, ll> mpp;
		vector<ll> tmp;
		// set<ll> counter;
		rep(j, 0, m) {
			tmp.pb(arr[i][j]);
			// mpp[arr[i][j]] = j;
			// mpp = {arr[i][j], j};
			// auto it = mpp.find(arr[i][j]);
			// cout << it->ss << endl;
			// mpp.insert({arr[i][j], j});
			// counter.insert(arr[i][j]);
			// if (i == 0) mpp[j] = arr[i][j];
			// tmp[j] = arr[i][j];
		}
		sort(all(tmp));
		ll count = 0;
		ll valReq = -1;
		rep(j, 0, m) {
			if (arr[i][j] != tmp[j]) {
				l = j;
				valReq = tmp[j];
				break;
			}
		}
		if (l == -1) continue;
		rep(j, l + 1, m) {
			if (arr[i][j] == valReq) {
				r = j;
			}
		}
		break;
		// debug(count);
		// debug(l);
		// debug(r);
		// if (!count) {
		// 	// if (l != -1) {
		// 	if (arr[i][l] != tmp[r]) {
		// 		ok = 0;
		// 	}

		// 	// }
		// 	else count = 2;
		// }
		// if (count < 1) ok = 0;
		// if (!ok) break;
	}
	rep(i, 0, n) {
		if (l != -1 && r != -1) {
			swap(arr[i][l], arr[i][r]);
		}
	}

	if (okay(arr)) {
		cout << l + 1 << ta << r + 1 << endl;
	}
	else {
		cout << -1 << endl;
	}
	// ll left = -1;
	// for (auto it : mpp) {
	// 	tmp.pb(it.ss);
	// 	if (count != it.ss) {
	// 		ans = {min(count, it.ss), max(count, it.ss)};
	// 	}
	// 	count += 1;
	// }
	// // debug(tmp);
	// // debug(sortArr);
	// if (i > 0) {
	// 	ll cnt1 = sz(tmp) - sz(counter) + 1;
	// 	rep(k, 0, m) {
	// 		// debug(cnt1);
	// 		if (cnt1 && tmp[k] != sortArr[k]) {
	// 			cnt1 -= 1;
	// 		}
	// 		else if (!cnt1 && tmp[k] != sortArr[k]) {
	// 			ok = 0;
	// 			break;
	// 		}
	// 	}
	// 	// if (tmp != sortArr) {
	// 	// 	ok = 0;
	// 	// 	break;
	// 	// }
	// }
	// sortArr = tmp;
	// sort(all(tmp));
	// sortArr.pb(tmp);

// debug(mpp);
// // rep(i, 0, n) {
// // 	rep(j, 0, m) {

// // 	}
// // }
// for(auto&it:mpp){
// 	rep(i, 0, n){
// 		if()
// 	}
// }
// int ok = 0;
// pair<ll, ll> ans = { -1, -1};
// rep(i, 0, n) {
// 	rep(j, 0, m - 1) {
// 		if (!ok && arr[i][j] > arr[i][j + 1]) {
// 			ok = 1;
// 			ans = {i, j};
// 		}
// 		else if (arr[i][j] > arr[i][j + 1]) {
// 			debug(ans.ss);
// 			// if (ans.ss != j) {
// 			// 	cout << -1 << endl;
// 			// 	return;
// 			// }
// 		}
// 	}
// }
// if (ans.ff == -1 && ans.ss == -1) {
// 	ans = {0, 0};
// }
// // cout << endl;
	// if (!ok) cout << -1 << endl;
	// else cout << l + 1 << ta << r + 1 << endl;
}


int main()
{
	init_code();
	ll tc = 1, i = 1;
	cin >> tc;
	while (tc--) {
		// cout << "Case #" << i << ": ";
		solve();
		// i++;
	}
	return 0;
}
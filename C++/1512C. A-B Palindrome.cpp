// Author : TerminalWarlord - Joy Biswas
// Date   : 01.07.2022 10:17:50:44 AM +06:00 Asia/Dhaka

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


void solve() {
	ll a, b, n;
	cin >> a >> b;
	string s;
	cin >> s;
	n = a + b;
	int ok = 1;
	ll count = 0;
	rep(i, 0, n / 2 + 1) {
		if (i == n / 2 && !(n & 1)) continue;
		if ((s[i] != '?' && s[n - 1 - i] == '?') || (s[i] == '?' && s[n - 1 - i] != '?')) {
			if (s[i] == '?') {
				s[i] = s[n - i - 1];
			}
			else {
				s[n - i - 1] = s[i];
			}

		}
		if (s[i] == '1') b -= 2;
		else if (s[i] == '0') a -= 2;
		if (i == n / 2) {
			if (s[n / 2] == '?') {
				if (a & 1) a -= 1, s[n / 2] = '0';
				else if (b & 1) b -= 1, s[n / 2] = '1';
			}
			else {
				if (s[i] == '1') b += 1;
				else a += 1;
			}
		}
	}

	rep(i, 0, n / 2) {
		if (s[i] == s[n - i - 1] && s[i] == '?') {
			if (a > b) {
				s[i] = '0';
				s[n - 1 - i] = '0';
				a -= 2;
			}
			else {
				s[i] = '1';
				s[n - 1 - i] = '1';
				b -= 2;
			}
		}

	}
	rep(i, 0, n / 2) {
		if (s[i] != s[n - 1 - i]) {ok = 0; break;}
	}
	if (ok && a == 0 && b == 0) cout << s << endl;
	else cout << -1 << endl;
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
#include <bits/stdc++.h>

#define lli long long int
#define F first
#define S second
#define pb push_back
#define endl '\n'
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define N 999 // here we are using 999 instead of 1000 because we have to find the sum below 1000

using namespace std;

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}

int sumDivisibleby(int m){
  int n = N/m;
  //bug(n,N,m);
  return m * ((n * (n + 1)) / 2);
}

void solve(){
  cout << sumDivisibleby(3) + sumDivisibleby(5) - sumDivisibleby(15) << endl;
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--) solve();
  return 0;
}


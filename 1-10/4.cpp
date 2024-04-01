#include <bits/stdc++.h>

#define lli long long int
#define F first
#define S second
#define pb push_back
#define endl '\n'
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)

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

bool isPalin(int n){
  int rev = 0;
  int m = n;
  while(m){
    rev = (10 * rev) + (m % 10);
    m /= 10;
  }
  return rev == n;
}

void solve(){
  int largeProd = 1;
  for(int i  = 999 ; i >= 100 ; i--){
    for(int j = 999 ; j >= 100 ; j--){
      if(isPalin(i * j) && i*j > largeProd){
        largeProd = i * j;
      }
    }
  }
  cout << largeProd << endl;
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--) solve();
  return 0;
}


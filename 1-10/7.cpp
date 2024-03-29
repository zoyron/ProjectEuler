#include <bits/stdc++.h>

#define lli long long int
#define F first
#define S second
#define pb push_back
#define endl '\n'
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define N 10000000

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

bool sieve[N];

void solve(){
  memset(sieve, 1, N);
  int target, i,j,totalPrimes = 0, largetPrimeTillNow;
  cout << "Enter the target position of the prime number: " ;
  cin >> target;
  sieve[0] = 0;
  sieve[1] = 0;
  // setting the values in sieve and checking for the prime
  for(i = 0 ; i < N ; i++){
    if(sieve[i]){
      totalPrimes++;
      if(totalPrimes == target){
        cout << "the target prime number is " << i << endl;
        return;
      }
      for(j = i+i ; j < N ; j += i)
        sieve[j] = 0;
    }
  }
}

int32_t main(){
  int t = 1;
  //cin >> t;
  while(t--) solve();
  return 0;
}


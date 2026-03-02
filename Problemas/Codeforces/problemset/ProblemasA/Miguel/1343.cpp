#include <bits/stdc++.h>

#define fi first
#define se second
#define forn(i,n) for(int i=0;i< (int)n; ++i)
#define fore(i,l,r) for(int i=(int)l; i<= (int)r; ++i)
#define ford(i,n) for(int i=(int)(n) - 1; i>= 0; --i)
#define foraut(p,m) for(auto &p : m)
#define forc(c,s) for(char c: s)
#define pb push_back
#define el '\n'
#define sz(v) int(v.size())
#define all(v) v.begin(),v.end()
#define tc int t; cin >> t; while(t--)
#define fa(x) bool x=false
#define dv(v) forn(i,sz(v)) cout << v[i] << " \n"[i == sz(v)-1]
#define d(x) cout << (x) << el
#define bug(x) cout << (#x) << ": " << (x) << el

using namespace std;

typedef long long ll;
typedef double ld;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef tuple<int,int,int> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<ld> vd;
typedef unordered_map<int,int> umi;
typedef unordered_map<char,int> umc;
typedef unordered_map<string,int> ums;

const int inf = 1e9;
const int nax = 1e5+200;
const ld pi = acos(-1);

vector<int> primes_up_to(int x) {
    vector<char> is_prime(x + 1, true);
    vector<int> primes;

    if (x < 2) return primes; // No primes less than 2

    is_prime[0] = is_prime[1]= is_prime[2]= false;

    for (int j = 2 * 2; j <= x; j += 2) {
        is_prime[j] = false;
    }
    for (int i = 3; i <= x; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= x; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  vector<int> primes = primes_up_to(10000);
  tc{
    int n;cin>>n;
    for (int p : primes) {
        if(n%p==0){d(n/p);break;}
    }
  }
}

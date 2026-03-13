#include <bits/stdc++.h>
using namespace std;

/*--------------------------------------------------------------------------------------------------------------------------*/
/** * MACROS & TYPEDEFS 
 **/
#define fastio()      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nline         "\n"
#define pb            push_back
#define ppb           pop_back
#define mp            make_pair
#define ff            first
#define ss            second
#define sz(x)         ((int)(x).size())
#define all(x)        (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

/**
 * CONSTANTS
 **/
const ll MOD  = 1e9 + 7;
const ll MOD1 = 998244353;
const ll INF  = 1e18;
const lld PI  = 3.14159265358979323846;

/**
 * DEBUGGING SUITE
 **/
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)     {cerr << t;}
void _print(int t)    {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t)   {cerr << t;}
void _print(lld t)    {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t)    {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}

/*--------------------------------------------------------------------------------------------------------------------------*/

// Forward Declaration
void solve();

int main() {
    fastio();

#ifndef ONLINE_JUDGE
    freopen("err.txt", "w", stderr);
#endif

    int t = 1;
    cint>>t;
    while (t--) {
        debug(t);
        solve();

    }

    return 0;
}

/*--------------------------------------------------------------------------------------------------------------------------*/
/**
 * CORE LOGIC
 **/
void solve() {
}



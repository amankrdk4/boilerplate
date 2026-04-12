/*
 * .-----------.
 * .'               '.
 * /   _____________   \
 * /   /             \   \
 * |   |   █████╗ ███╗   ███╗ █████╗ ███╗   ██╗   |   |
 * |   |  ██╔══██╗████╗ ████║██╔══██╗████╗  ██║   |   |
 * |   |  ███████║██╔████╔██║███████║██╔██╗ ██║   |   |
 * |   |  ██╔══██║██║╚██╔╝██║██╔══██║██║╚██╗██║   |   |
 * |   |  ██║  ██║██║ ╚═╝ ██║██║  ██║██║ ╚████║   |   |
 * |   |  ╚═╝  ╚═╝╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝   |   |
 * \   \_______________________________________/   /
 * \                                             /
 * '.               [ AMAN ]                  .'
 * '-----------._______ .-----------'
 *
 * ONE CODE TO RULE THEM ALL,
 * ONE CODE TO FIND THEM,
 * ONE CODE TO BRING THEM ALL,
 * AND IN THE TERMINAL BIND THEM.
 *
 * Author:amankrdk4
 * _____________________________________________________________
 */
#include <bits/stdc++.h>
using namespace std;

/*--------------------------------------------------------------------------------------------------------------------------*/
/** * MACROS & TYPEDEFS **/
#define int           long long
#define fastio()      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define nline         "\n"
#define pb            push_back
#define ppb           pop_back
#define mp            make_pair
#define ff            first
#define ss            second
#define sz(x)         ((int)(x).size())
#define all(x)        (x).begin(), (x).end()

typedef unsigned long long ull;
typedef long double lld;

/** * CONSTANTS **/
static int MOD  = 1e9 + 7;
const int INF  = 1e18;
const lld PI   = 3.14159265358979323846;

/**
 * ENHANCED DEBUGGING SUITE
 **/
#ifdef LOCAL
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int t)    {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t)   {cerr << t;}
void _print(lld t)    {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t)    {cerr << t;}

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

/*--------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------*/
/** * IMPORTANT FUNCTIONS FOR CP **/

template<typename T>
T invpower(T base, T exp) {
    T res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

template<typename T>
T modinv(T n) {
    return invpower(n, (T)MOD - 2);
}

/* Modular Arithmetic Helpers */
template<typename T> T modadd(T a, T b) { return ((a % MOD) + (b % MOD)) % MOD; }
template<typename T> T modsub(T a, T b) { return ((a % MOD) - (b % MOD) + MOD) % MOD; }
template<typename T> T modmul(T a, T b) { return ((a % MOD) * (b % MOD)) % MOD; }
template<typename T> T moddiv(T a, T b) { return modmul(a, modinv(b)); }

template<typename T>
void sieve(vector<T>& is_prime, int n) {
    is_prime.assign(n + 1, 1);
    if (n >= 0) is_prime[0] = 0;
    if (n >= 1) is_prime[1] = 0;
    for (int p = 2; (long long)p * p <= n; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p)
                is_prime[i] = 0;
        }
    }
}

/** * COMBINATORICS & FACTORIALS **/
const int MAXN = 1e6 + 5;
int fact[MAXN], invFact[MAXN];
bool is_precomputed = false;

void precompute() {
    if (is_precomputed) return;
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) 
        fact[i] = modmul((int)fact[i - 1], i);

    invFact[MAXN - 1] = modinv((int)fact[MAXN - 1]);
    for (int i = MAXN - 2; i >= 0; i--) 
        invFact[i] = modmul((int)invFact[i + 1], i + 1);
    
    is_precomputed = true;
}

template<typename T>
T nCr(T n, T r) {
    if (r < 0 || r > n) return 0;
    if (!is_precomputed) precompute();
    return modmul((T)fact[n], modmul((T)invFact[r], (T)invFact[n - r]));
}

template<typename T>
T nPr(T n, T r) {
    if (r < 0 || r > n) return 0;
    if (!is_precomputed) precompute();
    return modmul((T)fact[n], (T)invFact[n - r]);
}

void solve();

/**
 * I/O HANDLER
 **/
void setIO(string name = "") {
    fastio();
    cout << fixed << setprecision(15); 
    
#ifndef LOCAL
    // On Judge: Only use File I/O if a name is provided (USACO style)
    if (!name.empty()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
#endif
    // If LOCAL is defined, or name is empty on judge, it uses Standard I/O.
}

int32_t main() {
    /** * Standard: setIO(""); 
     * USACO:    setIO("problemname"); 
     **/
    /* usaco */
    setIO("");

    int t = 1;
    cin >> t; 
    
    /* tinp */
    for(int test=1;test<=t;test++){
        debug(test);
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

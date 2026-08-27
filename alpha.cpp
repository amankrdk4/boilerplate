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

/** * CONSTANTS **/
static ll MOD  = 1e9 + 7;
const ll INF  = 1e18;
const lld PI   = 3.14159265358979323846;

/**
 * ENHANCED DEBUGGING SUITE
 **/
#ifdef LOCAL
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

#ifdef LOCAL
auto time_start = chrono::high_resolution_clock::now();
void print_execution_time() {
    auto time_end = chrono::high_resolution_clock::now();
    chrono::duration<double> diff = time_end - time_start;
    cerr << nline << "--------------------------" << nline;
    cerr << "Runtime: " << fixed << setprecision(6) << diff.count() << " s" << nline;
}
#endif

void _print(int t)    {cerr << t;}
void _print(ll t)    {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t)   {cerr << t;}
void _print(lld t)    {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t)    {cerr << t;}
void _print(bool t)   {cerr << (t ? "true" : "false");}

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



/* Modular Arithmetic Helpers */
template<typename T> T modadd(T a, T b) { return ((a % MOD) + (b % MOD)) % MOD; }
template<typename T> T modsub(T a, T b) { return ((a % MOD) - (b % MOD) + MOD) % MOD; }
template<typename T> T modmul(T a, T b) { return ((a % MOD) * (b % MOD)) % MOD; }
template<typename T> T moddiv(T a, T b) { return modmul(a, modinv(b)); }



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
#ifdef LOCAL
    atexit(print_execution_time);
#endif
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
    //calling out all autobots
}

/***************************************************************\
                I tell computers to do things,
                    Sometimes they listen.
    Author  : PXblaZe
    Problem : --problem link--
    Insta   : ig_sumit10
    GitHub  : https://github.com/PXblaZe
\***************************************************************/

#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx,avx2,fma")

#include <bits/stdc++.h>

using namespace std;

#define elif           else if 
#define str            string
#define len(x)         (x).size() //   :)
#define ll             long long int
#define fi(x)          if(!(x))
#define elfi(x)        else fi(x)
#define ln             '\n'
#define itps(ls, b, e) ls.begin()+b, ls.begin()+e
#define b2e(ls)        ls.begin(), ls.end()
#define arinp(ar, sze) Rep(sze) cin >> ar[_]

//Vectors////////////////////////////////////////////
#define vec            vector<
#define ivec           vec int>
#define svec           vec str>
#define llvec          vec ll>
#define pb             push_back
#define fnt            front
#define bk             back
template<typename D>
inline void vecinp(vec D>& v) {
    D a; cin>>a;
    v.pb(a);
}
/////////////////////////////////////////////////////


//For loops//////////////////////////////////////////
#define For(i, s, e) for(ll i=s; i<e; i++)
#define Rof(i, s, e) for(ll i=s; i>e; i--)
#define To(i, e)     For(i, 0, e)
#define Rto(i, s)    Rof(i, s, -1)
#define Rep(e)       To(_, e)
/////////////////////////////////////////////////////


// Greatest Common Divisor
inline ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);   
}

// Least Common Multiple
inline ll lcm(ll a, ll b) {
    return (a*b) / gcd(a, b);
}

// To check the iterable is palindrome
template<typename It>
bool ispald(It begin, It end) {
    To(i, (end-begin)/2)
        if (*(begin+i) != *(end-i-1))
            return false;
    return true;
}


#define OJ
#define tests

#ifdef OJ
#define debug(...)
#else
template<typename T, typename enable_if<__is_one_of<T, int, char, ll, double, float, long double, str, bool>::value, int>::type = 0>
void __printx__(const T& x) {cerr << x;}
template<typename K, typename V> void __printx__(const pair<K, V>& x) {cerr << '{' << x.first << ", " << x.second << '}';}
template<typename C, typename enable_if<!__is_one_of<C, int, char, ll, double, float, long double, str, bool>::value, int>::type = 0>
void __printx__(const C& x) {
    cerr << '{';
    bool f = false;
    for (typename C::value_type c: x) {
        if (f) cerr << ", ";
        __printx__(c);
        if (!f) f = true;
    }
    cerr << '}';
}
#define debug(x) cerr << '[' << #x << ", " << __LINE__ <<  "]: ", __printx__(x), cerr << ln;
#endif

//Solution///////////////////////////////////////////////////////////
void solve() {--Solution starts here--}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    #ifndef OJ
        freopen("/home/blaze/Codes/Cpp/CP/input.txt", "r", stdin);
        freopen("/home/blaze/Codes/Cpp/CP/output.txt", "w", stdout);
    #endif
    #ifdef tests
        ll t; cin >> t;
        while(t--) 
    #endif
    solve();
}
/////////////////////////////////////////////////////////////////////

#pragma GCC target ("avx2")
#pragma GCC optimize ("Ofast")

#include <bits/stdc++.h>

using namespace std;

#define elif else if      // Python is OP
#define str string        // Again from Python
#define len(x) (x).size() //   :)
#define ll long long int
#define fi(x) if(!(x))
#define elfi(x) else fi(x)
#define ln "\n"
#define itps(ls, b, e) ls.begin()+b, ls.begin()+e
#define b2e(ls) ls.begin(), ls.end()

//Vectors////////////////////////
#define vec vector<
#define ivec vec int>
#define svec vec str>
#define llvec vec ll>
#define pb push_back
#define fnt front
#define bk back
template<typename D>
inline void vecinp(vec D>& v) {
    D a; cin>>a;
    v.pb(a);
}
/////////////////////////////////

//For loops//////////////////////////////////////////
#define For(i, s, e) for(register ll i=s; i<e; i++)
#define Rof(i, s, e) for(register ll i=s; i>e; i--)
#define To(i, e) For(i, 0, e)
#define Rto(i, s) Rof(i, s, -1)
#define Rep(e) To(_, e)
/////////////////////////////////////////////////////


// Summation
int Sum(int n) {
    if(n<1) return 0;
    else return n+Sum(n-1);
}

// Factorial
int fact(int n) {
    if(n==1) return 1;
    else return n*fact(n-1);
}

// To check the iterable is palindrome
template<typename It>
bool ispald(It begin, It end) { 
    ll flag = 0, n=end-begin;
    To(i,n/2) {
        if (*(begin+i) != *(end-i-1)) { 
            flag = 1;
            break;
        }
    }
    if (flag == 1)return false;
    else return true;
}

// returns different elements from iterable
template<typename It, typename D> 
vec D> delmt(It begin, It end, D type) { 
    unordered_set<D> s;
    vec D> v;
    while(begin!=end) {
        D f = *begin;
        if(s.find(f)==s.end()) {
            s.insert(f);
            v.pb(f);
        }
        begin++;
    }
    return v;
}

// returns least/max pos diff b/w elmA & elmB
template< typename It,typename D>
auto cyldif( It begin, It end, D elmA, D elmB, bool least = true) {
    ll d=0;
    D c = elmA;
    D b = &(*begin), e = &(*end);
    while(c!=elmB&&elmA!=elmB) {
        if(c==b) {c = e; continue;}
        if(elmA==e) {elmA=b; continue;}
        --c;++elmA;d++;
    }
    if(least) return d;
    else return end-begin-d;
}

//solution
void solve() {}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; cin>>t;
    while(t--) solve();
}

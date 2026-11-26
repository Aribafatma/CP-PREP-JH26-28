#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(g,t) for(ll g {} ; g<t ; g++)
#define loop1(g,t) for(ll g {1} ; g<=t ; g++)
#define cyes cout << "YES\n"
#define cno  cout << "NO\n"
#define F first
#define S second
#define mod 998244353

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    ll n , m , q, ty , L , R , x;
    while (tt--){
        cin >> n >> m;
        ll a[n], b[m];
        ll sumA = 0 , sumB = 0;
        loop(i,n) cin >> a[i], sumA += a[i];
        loop(i,m) cin >> b[i], sumB += b[i];
        sumA = ((sumA)%mod + mod)%mod;
        sumB = ((sumB)%mod + mod)%mod;

        cin >> q;
        while(q--){
            cin >> ty;
            if (ty == 1){
                cin >> L >> R >> x;
                sumA = (sumA + (R-L+1)*x)%mod;
                sumA = ((sumA)%mod + mod)%mod;
            }
            else if (ty == 2){
                cin >> L >> R >> x;
                sumB = (sumB + (R-L+1)*x)%mod;
                sumB = ((sumB)%mod + mod)%mod;
            }
            else{
                cout << (sumA*sumB)%mod << "\n";
            }
        }

    }
    return 0;
}
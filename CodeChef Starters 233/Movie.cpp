#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n,m,a,b,c; cin >> n >> m >> a >> b >> c;
        int mn = min(n,m);
        cout << mn*c+(n-mn)*a+(m-mn)*b << "\n";

    }
    return 0;
}
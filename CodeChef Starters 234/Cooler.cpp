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

        int n,m; cin >> n >> m;
        int ans = 0;
        while(n>m){
            ans+=n;
            n--;
        }
        cout << ans << "\n"; 
    }
    return 0;
}
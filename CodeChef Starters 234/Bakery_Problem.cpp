#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin >> n >> k;
    
    int ans = 100*n;
    int bribed = k+n*60;
    ans = min(ans,bribed);
    
    cout << ans;
    
    return 0;
}
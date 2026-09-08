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

        int n; cin >> n;
        vector<int> a(n);
        for(auto &i : a){
            cin >> i;
        }
        
        sort(a.rbegin(),a.rend());
        
        int ans=0, sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum<0){
                break;
            }
            ans++;
        }
        cout << ans << "\n";

    }
    return 0;
}
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

        int n,k; cin >> n >> k;
        vector<int> v(n);
        for(auto &i : v) cin >> i;
        sort(v.begin(),v.end());

        int rem = n-k;
        int l = rem/2;
        if(rem%2==0) l--;
        int r = rem/2;
        
        set<int> st;
        for(int i=l;i<n-r;i++){
            st.insert(v[i]);
        }
        for(auto it : st){
            cout << it << " ";
        }
        cout << "\n";

    }
    return 0;
}

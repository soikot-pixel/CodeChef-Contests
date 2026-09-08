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
        vector<vector<int>> arr(n); // 2d vector
        for(int i = 0; i < n; i++){
            int a,b,c; cin >> a >> b >> c;
            vector<int> temp = {a,b,c}; // akkebare element insert korsi
            sort(temp.begin(), temp.end());
            arr[i] = temp;
        }
        
        multiset<pair<int,int>> ms;
        vector<int> cur(n); // 4 ta index ache tai count korte ai vector use korsi

        for(int i=0; i<n; i++){
            ms.insert({arr[i][0], i});
            // smallest element insert korsi
        }
        
        int ans = 2e9;
        while(1){

            auto it_min = ms.begin(); // minimum element er iterator
            auto it_max = ms.rbegin(); // maximum element er iterator

            int mn = it_min->first; // minimum element
            int mx = it_max->first; // maximum element
            ans = min(ans,mx - mn);

            int idx = it_min->second;
            ms.erase(it_min);

            cur[idx]++;
            if(cur[idx] == 3) break; 
            // jodi kono index er 3 ta element use hoye jay tahole break

            // jei cuurent index er element remove korsi 
            // oi index er next element insert korte hobe
            // element er index hobe joto gula element remove kora hoyeche
            ms.insert({arr[idx][cur[idx]], idx});

        }

        cout << ans << endl;

    }

    return 0;
}

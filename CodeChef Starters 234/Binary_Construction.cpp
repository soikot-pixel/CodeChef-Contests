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
        string s(n,'0');
        // all elements zero except first and last
        // due to they provide maximum number of unrepeated i+j's

        s[n-1] = '1';
        // last element 1 as it's mandatory to have in case of n=2 
        if(n>2) s[0] = '1';
        // first element 1 as it's mandatory to have in case of n>2
        cout << s << "\n";

    }
    return 0;
}
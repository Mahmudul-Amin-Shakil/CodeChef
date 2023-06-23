#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        string s; cin>>s;
        map<char, int>mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        int odd = 0;
        for(auto it : mp){
            if(it.second%2) odd++;
        }
        if(odd>1) cout<<0<<endl;
        else if(mp.size()==1){
            if(n%2) cout<<2<<endl;
            else cout<<1<<endl;
        }
        else cout<<1<<endl;
    }
    return 0;
}
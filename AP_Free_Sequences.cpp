#include<bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n]; 
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        bool b = false;
        for (int i = 0; i < n-2; i++) {
            for (int j = i+1; j < n-1; j++) {
                for (int k = j+1; k < n; k++) {
                    if(a[j]-a[i]==a[k]-a[j]) b = true;
                }
            }
        }
        if(b) cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
    return 0;
}
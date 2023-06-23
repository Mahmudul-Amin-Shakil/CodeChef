#include<bits/stdc++.h>
using namespace std; 

int main(){
    int y, k, n;
    cin>>y>>k>>n;
    int a = (n/k)*k;
    int b = ((y/k)+1)*k;
    vector<int>v;
    for (int i = b; i <= a; i+=k) {
        v.push_back(i-y);
    }
    if(v.size()==0) cout<<-1<<endl;
    else {
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> v;
    for(int i=0;i<n;i++){
          int x;
          cin>>x;
          v.push_back(x);
    }
    vector<int> pre;
    pre.push_back(v[0]);
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+v[i];
        }
    while(q--){
        int a,b;
        cin>>a>>b;
        if(a==1){
            cout<<pre[b-1]<<endl;
        }else{
            cout<<(pre[b-1]-pre[a-2])<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
#define p pair<int,int>
int fun(int a[],int n,int k){
    priority_queue<int>h;
    for(int i=0;i<n;i++){
        h.push(a[i]);
        if(h.size()>k){
            h.pop();
        }
    }
    return h.top();
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"which smallest ? ";
        int val;
        cin>>val;
        cout<<"\n"<<fun(a,n,val)<<endl;
    }
return 0;
}

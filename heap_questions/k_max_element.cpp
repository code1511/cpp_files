#include<bits/stdc++.h>
using namespace std;
void fun(int a[],int n,int k){
//implementation of min heap
   priority_queue<int,vector<int>,greater<int>>h;
   for(int i=0;i<n;i++){
       h.push(a[i]);
       if(h.size()>k){
           h.pop();
       }
   }
   while(!h.empty()){
       cout<<h.top()<<" ";
       h.pop();
   }
   cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int N; cin>>N;
        int ar[N];
        for(int i=0;i<N;i++){
            cin>>ar[i];
        }
        int k;
        cout<<"which maximun element \n";
        cin>>k;
        fun(ar,N,k);
       cout<<endl;
    }
    return 0;
}

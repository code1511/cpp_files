vector<int> Solution::repeatedNumber(const vector<int> &a) {
    int n=a.size();
     vector<int>v(n,0);
     for(int i=0;i<n;i++){
         v[a[i]-1]++;
     }
     int one=-1;
     int two=-1;
     for(int i=0;i<n;i++){
         if(v[i]>1){
             one=i+1;
         }
         else if(v[i]==0){
             two=i+1;
         }
     }
     vector<int>ans;
     ans.push_back(one);
     ans.push_back(two);
     
     return ans;
}

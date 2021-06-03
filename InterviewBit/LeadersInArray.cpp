vector<int> Solution::solve(vector<int> &a) {
    vector<int>v;
    int n=a.size();
    int m=a[n-1];
    v.push_back(m);
    for(int i=n-2;i>=0;i--){
        if(m<a[i]){
            m=a[i];
            v.push_back(m);
        }
    }
    return v;
}

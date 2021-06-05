//link https://www.interviewbit.com/problems/noble-integer/


int Solution::solve(vector<int> &a) {
    sort(a.begin(),a.end());
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]<0){
            continue;
        }
        if(a[i]==a[i+1]){
            continue;
        }
        if(a[i]==(n-1-i)){
            return 1;
        }
    }
    if(a[n-1]==0){
        return 1;
    }
    return -1;
}

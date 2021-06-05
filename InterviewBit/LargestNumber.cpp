
bool com(const int &a,const int &b){
    string s1=to_string(a)+to_string(b);
    string s2=to_string(b)+to_string(a);
    
    return s1>s2;
}
string Solution::largestNumber(const vector<int> &b) {
    vector<int>a(b);
    string ans="";
    sort(a.begin(),a.end(),com);
    if(a[0]==0)
     return "0";
    for(auto i:a){
        ans+=to_string(i);
    } 
    return ans;
}

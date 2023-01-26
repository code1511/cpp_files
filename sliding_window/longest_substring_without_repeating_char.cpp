/*
link :https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
things to take care of :-
1) be clear with which data structure is needed here when it comes to repeat or duplicacy hash comes in our mind first but wait? do we required the freq? no so we can do it with set.
set will be more optimized here.
2) it;s a pretty sliding window question. keep in mind that which element should be removed when you find duplicacy.like here you are increasing i in case of duplicacy therefore remove i from set. 
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        unordered_set<char>st;
        int l=0;
        int i=0;int j=0;
        while( j<s.size()){
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                l=max(l,j-i+1);
                j++;
            }else{
                st.erase(s[i]); 
                i++;
            }
        }
        return l;
    }
};

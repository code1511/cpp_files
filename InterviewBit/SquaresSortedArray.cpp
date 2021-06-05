//two pointer approach
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int pos=0;
        while(pos<n && nums[pos]<0){
            pos++;
        }
        //now we got the first index of positive elements
        int neg = pos-1;
        //first index of negative elements
        while(pos<n && neg >=0){
            if(nums[pos]*nums[pos] < nums[neg]*nums[neg]){
                ans.push_back(nums[pos]*nums[pos]);
                pos++;             

            }else{
                ans.push_back(nums[neg]*nums[neg]);
                neg--;
            }
        }
        //if pos is not reached at the end
        while(pos<n){
            ans.push_back(nums[pos]*nums[pos]);
            pos++;
        }
        //if neg pointer isn't reached at the first index
        while(neg>=0){
             ans.push_back(nums[neg]*nums[neg]);
                neg--;
        }
        return ans;
    }
};

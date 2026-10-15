class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        for(int start=0;start<nums.size();start++){
            unordered_map<int,int> f;
        for(int end=start;end<nums.size();end++){
            f[nums[end]]++;
            ans+=f.size()*f.size();
         }
        }
        return ans;
    }
};
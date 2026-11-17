class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=0;
        for(int i=0;i<nums.size();i++){
            m+=nums[i]-nums[0];
        }
        return m;
    }
};
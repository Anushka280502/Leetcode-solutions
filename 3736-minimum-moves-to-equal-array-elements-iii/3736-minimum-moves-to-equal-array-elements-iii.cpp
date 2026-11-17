class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            m+=nums[nums.size()-1]-nums[i];
        }
        return m;
    }
};
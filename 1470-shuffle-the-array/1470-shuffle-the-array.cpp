class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a;
        for(int i=0;i<nums.size()/2;i++){
            a.push_back(nums[i]);
            a.push_back(nums[n+i]);
        }
        return a;
    }
};
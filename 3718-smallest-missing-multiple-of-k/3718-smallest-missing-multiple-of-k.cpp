class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> x(nums.begin(), nums.end());
        
        int multiple = k;
        while (x.count(multiple)) {
            multiple += k;
        }
        
        return multiple;
    }
};
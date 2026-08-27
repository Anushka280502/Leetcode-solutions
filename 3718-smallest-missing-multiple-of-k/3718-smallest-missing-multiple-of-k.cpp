class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if(nums.size() == 1 && k == nums[0]){
            return k*2;
        }
        int n = nums.size();
        int j=1;
        int ans;
        for(int x = 0 ; x <  nums.size() ; x++){
            int y = k*j;
            for(int i = x ; i < nums.size() ; i++){
                if(nums[i] == y){
                    j++;
                    break;
                }
            }
            ans = y;
        }
        if(ans == nums[n-1]){
            return ans+k;
        }
        return ans ;
    }
};
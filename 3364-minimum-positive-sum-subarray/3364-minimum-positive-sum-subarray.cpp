class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int len=l;len<=r;len++){
        int low=0;
        int high=0;
        int sum=0;
            while(high<n){
            sum+=nums[high];
            if(high-low+1==len){
                if(sum>0){
                    ans=min(ans,sum);
                }
                sum-=nums[low];
                low++;
            }
            high++;
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};
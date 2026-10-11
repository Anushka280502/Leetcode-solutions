class Solution {
public:
    bool judgeSquareSum(int c) {
        int l=0;
        long long r=sqrt(c);
        long long sum=0;
        while(l<=r){
            sum=l*l+r*r;
            if(sum==c){
                return true;
            }
            else if(sum<c){
                l++;
            }
            else{
                r--;
            }
        }
        return false;
    }
};
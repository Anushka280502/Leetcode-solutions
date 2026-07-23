class Solution {
public:
    int hammingWeight(int n) {
        int sum=0;
        while(n>0){
            int a=n%2;
            sum+=a;
            n=n/2;
        }
        return sum;
    }
};
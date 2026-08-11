class Solution {
public:
    int climbStairs(int n) {
        int c=0;
        if(n<=2){
            return n;
        }
        int a=1;
        int b=2;
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
        
    }
};
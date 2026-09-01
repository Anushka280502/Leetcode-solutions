class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        
        int p;
        for(int i=0;i<=19;i++){
            p=pow(3,i);
            if(p==n){
                return true;
            }
        }
        return false;
    }
};
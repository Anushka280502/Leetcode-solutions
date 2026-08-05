class Solution {
public:
    bool isThree(int n) {
        int c=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i*j==n){
                    c++;
                }
            }
        }
        if(c==3){
            return true;
        }
        else{
            return false;
        }
    }
};
class Solution {
public:
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        while(fast != 1 ){
            slow=digit(slow);
            fast=digit(fast);
            fast=digit(fast);
            if(slow == fast && fast != 1){
                return false;
            }
        }
        return true;
        
    }
    int digit(int n){
        int sum=0;
        while(n>0){
            int a=n%10;
            sum=sum+a*a;
            n=n/10;
        }
        return sum;
    
    }

};
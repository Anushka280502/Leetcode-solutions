class Solution {
public:
    bool isPalindrome(int x) {
        int b=x;
        long rev=0;
        while(x>0){
            int a=x%10;
            rev = 10*rev+a;
            x=x/10;
        }
        if(rev==b){
            return true;
        }
        else {
            return false;
        }
    }
};
class Solution {
    bool checkp(string s,int i,int j){
       while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int n= s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return checkp(s,i+1,j) || checkp(s,i,j-1);
            }
        }
        return true;
    }
};
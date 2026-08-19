class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        vector<int> f(26,0);
        for(char x:s){
            f[x-'a']++;
        }
        for(int i=0;i<n;i++){
            if(f[s[i]-'a']==1){
                return i;
                
            }
        }
        return -1;
    }
};
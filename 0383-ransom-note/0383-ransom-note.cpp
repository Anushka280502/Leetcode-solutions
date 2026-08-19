class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        vector<int> f(26,0);
        for(char x:magazine){
            f[x-'a']++;
        }
        vector<int> f2(26,0);
        for(char x:ransomNote){
            f2[x-'a']++;
        }
        for(int i=0;i<26;i++){
            if(f[i]<f2[i]){
            return false;
            }
        }
        return true;
        
    }
};
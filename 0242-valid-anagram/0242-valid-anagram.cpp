class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        vector<int> f1(26,0);
        for(char x:s){
            f1[x-'a']++;
        }
        vector<int> f2(26,0);
        for(char x:t){
            f2[x-'a']++;
        }
        if((f1!=f2)){
            return false;
        }
        return true;
    }
};
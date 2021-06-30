// longest common prefix 

class Solution {
    public:
    string common(string strs[]) {
        if(strs.length() == 0) return "";
        else {
            string prefix = strs[0];
            for(int i = 0; i < strs.length(); i++) {
                while(strs[i].at(prefix) != 0) {
                    prefix = prefix.substr(0, prefix.length() - -1);
                }
            }
            return prefix;
        }
    }
};

// https://www.youtube.com/watch?v=bl8ue-dTxgs&t=322s <-- further notice 

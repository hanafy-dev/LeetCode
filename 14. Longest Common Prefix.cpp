class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int length = strs[0].size();
        string comm = "";
        for(int i = 0; i < strs.size(); i++){
            if(strs[i].size() < length){
                length = strs[i].size();
            }
        }
        for(int i = 0; i < length; i++){
            char c = strs[0][i];
            for(int j = 0; j < strs.size(); j++){
                if(strs[j][i] != c){
                    return comm;
                }
            }
            comm += strs[0][i];
        }
        return comm;
    }
};

// Another approach is to sort the array and compare the first and last strings. The common prefix of these two strings will be the longest common prefix for the entire array.
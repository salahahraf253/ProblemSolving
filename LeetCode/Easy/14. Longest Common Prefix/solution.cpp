class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sol="";
        bool flag;
        for(int i=0;i<strs[0].size();i++){
            flag=true;
            for(int j=1;j<strs.size();j++){
                if(strs[0][i]!=strs[j][i] || i>=strs[j].size()){
                    flag=false;
                    break;
                }
            }
            if(flag)sol.push_back(strs[0][i]);
            else 
                break;
        }
        return sol;
    }
};

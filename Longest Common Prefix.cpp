class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        string ans;
        while(true)
        {
            char curr_ch = 0;
            for(auto s:strs){
                if(curr_ch==0){
                    curr_ch = s[i];
                }
                else if(curr_ch!=s[i]){
                    curr_ch = 0;
                    break;
                } 
                if(i>=s.size())
                {
                    curr_ch = 0;
                    break;
                }  
            }
            if(curr_ch==0){
                break;
            }
           ans.push_back(curr_ch);
           i++;
        }
        return ans;
    }
};

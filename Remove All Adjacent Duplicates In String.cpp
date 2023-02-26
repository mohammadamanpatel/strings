class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;
        string ans = "";
        while(i<s.length())
        {
            if(ans.length()>0)
            {
                if(s[i]!=ans[ans.length()-1])
                {
                    ans.push_back(s[i]);
                }
                else
                {
                    ans.pop_back();
                }
            }
            else
            {
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }
};

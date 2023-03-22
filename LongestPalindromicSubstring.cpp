class Solution {
public:
    bool isPalin(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        string ans="";
        for(int i = 0;i<s.size();i++)
        {
            for(int j = i;j<s.size();j++)
            {
                if(isPalin(s,i,j))
                {
                    string t = s.substr(i,j-i+1);
                    ans = t.size()>ans.size()?t:ans;
                }
            }
        }
        return ans;
    }
};

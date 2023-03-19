class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mapforS[256] = {0};
        int ischarsMap[256] = {0};
        for(int i=0;i<s.length();i++)
        {
            if(mapforS[s[i]]==0 and ischarsMap[t[i]]==0)
            {
                mapforS[s[i]] = t[i];
                ischarsMap[t[i]] = true;

            }
        }
        for(int i=0;i<s.length();i++)
        {
            if((char)mapforS[s[i]]!=t[i])
            {
                return false;
            }
        }
        return true;
    }
};

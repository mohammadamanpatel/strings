class Solution {
public:
    int Expand(int i,int j,string s)
    {
        int count = 0;
        while(i>=0 and j<s.length() and s[i]==s[j])
        {
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int i = 0;
        int count = 0;
        while(i<s.length())
        {
            //Even case
            int evenAns = Expand(i,i+1,s);
            count = count+evenAns;
            //Odd Case
            int oddAns = Expand(i,i,s); 
            count = count+oddAns;
            i++;
        }
        return count;
    }
};

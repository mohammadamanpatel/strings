class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int toInt = 0;
        int i = 0;
        // ignore spaces
        while(s[i]==' ')
        {
            i++;
        }
        // determine sign 
        if(i<s.size() and s[i]=='-'||s[i]=='+')
        {
           sign = s[i]=='-'?-1:1;
           i++;
        }
        //convert to integer
        while(i<s.size() and isdigit(s[i]))
        {
            if(toInt>INT_MAX/10 || (toInt==INT_MAX/10 and s[i]>'7'))
            {
                return sign==-1?INT_MIN:INT_MAX;
            }
            toInt = toInt*10+(s[i]-'0');
            i++;
        }
        return toInt*sign;
    }
};

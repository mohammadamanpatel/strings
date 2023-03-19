class Solution {
public:
    string reverseVowels(string str) {
         int s = 0;
         int e = str.length()-1;
    while(s<e)
    {
        if((str[s]=='a'||str[s]=='e'||str[s]=='i'||str[s]=='o'||str[s]=='u'||str[s]=='A'||str[s]=='E'||str[s]=='I'||str[s]=='O'||str[s]=='U') and (str[e]=='a'||str[e]=='e'||str[e]=='i'||str[e]=='o'||str[e]=='u'||str[e]=='A'||str[e]=='E'||str[e]=='I'||str[e]=='O'||str[e]=='U'))
        {
            swap(str[s],str[e]);
            s++;
            e--;
        }
        else if((str[s]=='a'||str[s]=='e'||str[s]=='i'||str[s]=='o'||str[s]=='u'||str[s]=='A'||str[s]=='E'||str[s]=='I'||str[s]=='O'||str[s]=='U') and !(str[e]=='a'||str[e]=='e'||str[e]=='i'||str[e]=='o'||str[e]=='u'||str[e]=='A'||str[e]=='E'||str[e]=='I'||str[e]=='O'||str[e]=='U'))
        {
            e--;
        }
        else
        {
            s++;
        }
    }
    return str;
    }
};

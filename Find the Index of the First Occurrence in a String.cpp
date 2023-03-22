class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = haystack.find(needle);
        while(pos!=string::npos){
            return pos;
            pos = haystack.find(needle);
        }
      return -1;
    }
};

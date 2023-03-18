class Solution {
public:
    bool isAnagram(string s, string t) {
      int freqTable1[256] = {0};
      for(int i=0;i<s.length();i++)
      {
          freqTable1[s[i]]++;
      }
      for(int i=0;i<t.length();i++)
      {
          freqTable1[t[i]]--;
      }
      for(int i=0;i<256;i++)
      {
          if(freqTable1[i]!=0)
          {
              return false;
          }
      }
      return true;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
      int freqTable1[256] = {0};
      int freqTable2[256] = {0};
      for(int i=0;i<s.length();i++)
      {
          freqTable1[s[i]]++;
      }
      for(int i=0;i<t.length();i++)
      {
          freqTable2[t[i]]++;
      }
      for(int i=0;i<256;i++)
      {
          if(freqTable1[i]!=freqTable2[i])
          {
              return false;
          }
      }
      return true;
    }
};

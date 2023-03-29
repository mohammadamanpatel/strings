class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string> >mp;
        for(auto str:strs){
            string s = str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }
        vector<vector<string>>v;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            v.push_back(i->second);
        }
        return v;
    }
}

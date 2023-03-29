class Solution {
public:
    std::array<int,256>hash(string str)
    {
        std::array<int,256>hash = {0};
        for(int i=0;i<str.length();i++)
        {
            hash[str[i]]++;
        }
        return hash;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<std::array<int,256>,vector<string>>mp;
        for(auto str:strs){
            mp[hash(str)].push_back(str);
        }
        vector<vector<string>>v;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            v.push_back(i->second);
        }
        return v;
    }
};

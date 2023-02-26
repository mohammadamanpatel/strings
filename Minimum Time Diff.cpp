class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        for(int i=0;i<timePoints.size();i++)
        {
            string curr = timePoints[i];
            int hours = stoi(curr.substr(0,2));
            int mins = stoi(curr.substr(3,2));
            int totalmins =  hours*60+mins;
            minutes.push_back(totalmins);
        }
        sort(minutes.begin(),minutes.end());
        int mini = INT_MAX;
        for(int i=0;i<minutes.size()-1;i++)
        {
            int diff = minutes[i+1] - minutes[i];
            mini = min(mini,diff);
        }
        int lastDiff = (minutes[0] + 1440) - minutes[minutes.size()-1];
        mini = min(mini,lastDiff);
        return mini;
    }
};

class Solution {
public:
    // returns time in mins
    int inmins(string s) {
        int h = (s[0]-'0')*10 + (s[1]-'0');
        int m = (s[3]-'0')*10 + (s[4]-'0');
        return h*60 + m;
    }
    
    int findMinDifference(vector<string>& time) {
        int n = time.size();
        vector<int> mins; // store time in mins
        unordered_map<int, bool> mp; // to check if duplicates exist
        
        // converting time into minutes
        for (int t = 0 ; t < n ; t++) {
            mins.push_back(inmins(time[t]));
            // if duplicate exists, min diff = 0
            if (mp[mins[t]]) return 0;
            else mp[mins[t]] = true;
        }

        sort(mins.begin(), mins.end());
        int max_mins = 1440; // 24*60
        // initialize mindiff
        // minT - maxT (or 1440 - (maxT - minT)) in mins
        int mindiff = max_mins - (mins[n-1] - mins[0]);
        
        // update min time diff
        for (int t = 1 ; t < n ; t++) mindiff = min(mins[t] - mins[t - 1], mindiff);
        
        return mindiff;
    }
};
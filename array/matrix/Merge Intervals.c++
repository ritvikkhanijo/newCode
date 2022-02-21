vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> vect;
        int len = intervals.size();
        for (int i = 0; i < len; i++) {
            int left = intervals[i][0];
            int right = intervals[i][1];
            while (i < len - 1 && right >= intervals[i + 1][0]) {
                right = max(right, intervals[i + 1][1]);
                i++;
            }
            vect.push_back({left, right});
        }
        return vect;
    }
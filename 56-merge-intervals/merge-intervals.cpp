class Solution {
public:

    static bool comp(vector<int> a, vector<int> b) {
        return a[0] < b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(), comp);

        for (int i = 0; i < intervals.size() - 1; i++) {

            if (intervals[i][1] >= intervals[i+1][0]) {

                int mini = min(intervals[i][0], intervals[i+1][0]);
                int maxi = max(intervals[i][1], intervals[i+1][1]);

                intervals[i] = {mini, maxi};

                intervals.erase(intervals.begin() + i + 1);

                i--;
            }
        }

        return intervals;
    }
};
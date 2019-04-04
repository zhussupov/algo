/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

bool acompare(Interval lhs, Interval rhs) { 
        return lhs.start < rhs.start; 
    } 

class Solution {
public:
    
    vector<Interval> merge(vector<Interval>& intervals) {
        int len = intervals.size();
        if (len == 0)
            return {};
        sort(intervals.begin(), intervals.end(), acompare);
        vector<Interval> ans;
        int curl = intervals[0].start, curr = intervals[0].end;
        for (int i = 1; i < len; i++) {
            if (intervals[i].start <= curr) {
                curr = max(curr, intervals[i].end);
            } else {
                ans.push_back(Interval(curl, curr));
                curl = intervals[i].start;
                curr = intervals[i].end;
            }
        }
        ans.push_back(Interval(curl, curr));
        return ans;
    }
};
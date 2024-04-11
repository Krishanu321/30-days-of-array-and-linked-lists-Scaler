/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval)
{
    vector<Interval> mergedIntervals;
    int n = intervals.size();
    int i = 0;

    while (i < n && intervals[i].end < newInterval.start)
    {
        mergedIntervals.push_back(intervals[i]);
        i++;
    }

    while (i < n && intervals[i].start <= newInterval.end)
    {
        newInterval.start = min(newInterval.start, intervals[i].start);
        newInterval.end = max(newInterval.end, intervals[i].end);
        i++;
    }
    mergedIntervals.push_back(newInterval);
    while (i < n)
    {
        mergedIntervals.push_back(intervals[i]);
        i++;
    }

    return mergedIntervals;
}
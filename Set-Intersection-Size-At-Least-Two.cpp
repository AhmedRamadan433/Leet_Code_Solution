class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 if (a[1] != b[1])
                     return a[1] < b[1];
                 return a[0] > b[0];
             });

        int ans = 0;
        long long p1 = -1e18, p2 = -1e18;

        for (auto& iv : intervals) {
            long long l = iv[0], r = iv[1];
            if (p2 < l) {
                ans += 2;
                p1 = r - 1;
                p2 = r;
            } else if (p1 < l && l <= p2) {
                ans += 1;
                p1 = p2;
                p2 = r;
            }
        }
        return ans;
    }
};
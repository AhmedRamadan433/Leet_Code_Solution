class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long ans = 0;
        long maxDiagonal = -1;

        for (auto it : dimensions) {
            long diag = (long)it[0] * it[0] + (long)it[1] * it[1];
            long area = (long)it[0] * it[1];

            if (diag > maxDiagonal) {
                maxDiagonal = diag;
                ans = area;
            } else if (diag == maxDiagonal) {
                ans = max(ans, area);
            }
        }
        return ans;
    }
};

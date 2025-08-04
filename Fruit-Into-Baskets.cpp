class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        /*
        1-make frequncy map and iterate over all array
        2-ans is sum of frequncy of last two elements
        */
        map<int, int> mp;
        int mx = 0, ans = 0;
        for (auto it : fruits) {
            mp[it]++;
            mx = max(it, mx);
        }
        ans = mp[mx];
        auto it = mp.rbegin();
        it++;
        ans += it->second;
        return ans;
    }
};
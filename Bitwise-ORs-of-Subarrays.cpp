class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int> ans;
        unordered_set<int> prev;
        for (int num : arr) {
            unordered_set<int> curr;
            curr.insert(num);
            for (int x : prev) {
                curr.insert(x | num);
            }
            prev = curr;
            ans.insert(curr.begin(), curr.end());
        }
        return ans.size();
    }
};
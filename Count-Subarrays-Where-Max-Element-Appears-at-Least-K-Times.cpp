class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans = 0;
        int n = nums.size()-1;
        int l = 0, r = 0, cnt = 0;
        auto it = *max_element(nums.begin(), nums.end());
        while (r <= n) {
            if (nums[r] == it)
                cnt++;
            while (cnt >= k) {
                ans++;
                ans += n - r;

                if (nums[l] == it)
                    cnt--;
                l++;
            }
            r++;
        }
        return ans;
    }
};

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        if (n == 1)
            return 1;
        vector<int> arr;
        while (n) {
            arr.push_back(n % 10);
            n /= 10;
        }
        sort(arr.begin(), arr.end());
        do {
            long ans = 0, cnt = 1;
            for (int x : arr)
                ans += x * cnt, cnt *= 10;
            bool c = (ans) & (ans - 1);
            cout<<ans<<endl;
            if (c == 0 && int(log10(ans)) + 1 == arr.size())
                return 1;
        } while (next_permutation(arr.begin(), arr.end()));

        return 0;
    }
};
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string ans = frequncy(n);
        for (int i = 0; i < 31; i++) {
            if (frequncy(1 << i) == ans)
                return 1;
        }
        return 0;
    }
    string frequncy(int n) {
        string s(10, '0');
        while (n) {
            s[n % 10]++;
            n /= 10;
        }
        return s;
    }
};
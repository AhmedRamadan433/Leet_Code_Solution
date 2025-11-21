class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char, int> fq;
        set<string> ss;

        for (auto c : s) {
            fq[c]++;
        }

        for (auto it : fq) {
            char a = it.first;
            int freqA = it.second;

            if (freqA >= 2) {
                int first = s.find(a);
                int last = s.rfind(a);
                for (auto it2 : fq) {
                    char b = it2.first;
                    if (a == b)
                        continue;
                    int posB = s.find(b, first + 1);
                    if (posB != string::npos && posB < last) {
                        ss.insert(string(1, a) + string(1, b) + string(1, a));
                    }
                }
            }
            if (freqA > 2) {
                ss.insert(string(1, a) + string(1, a) + string(1, a));
            }
        }

        for (auto it : ss)
            cout << it << endl;

        return ss.size();
    }
};
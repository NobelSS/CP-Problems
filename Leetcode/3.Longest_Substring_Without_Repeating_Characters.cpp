#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int max(int a, int b) { 
        return a > b ? a : b; 
    }

    int lengthOfLongestSubstring(string s) {
        vector<int> alpha(128, 0);
        int n = s.length();
        int first = 0, ans = 0, count = 0;
        for (int i = 0; i < n; i++) {
            count++;
            alpha[s[i]]++;
            bool check = any_of(alpha.begin(), alpha.end(), [](int elem) {
                return elem > 1;
            });
            if (check) {
                alpha[s[first]]--;
                count--;
                first++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};

int main() {
    Solution solution;

    string s = "abcabcbb";

    int result = solution.lengthOfLongestSubstring(s);

    cout << result << endl;

    return 0;
}


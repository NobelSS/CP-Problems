#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ans1 = 0, ans2 = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                if (nums[i] + nums[j] == target) {
                    ans1 = i;
                    ans2 = j;
                    return {ans1, ans2};
                }
            }
        }
        return {};
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout << result[0] << ", " << result[1] << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}


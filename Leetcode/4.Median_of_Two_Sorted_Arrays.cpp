#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int size3 = nums1.size() + nums2.size();
        nums3.reserve(size3); 
        nums3.insert(nums3.end(), nums1.begin(), nums1.end());
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());
        sort(nums3.begin(), nums3.end());
        
        if (size3 % 2 == 1) return nums3[((size3 + 1) / 2) - 1];
        else {
            size3 /= 2;
            return ((double)nums3[size3] + (double)nums3[size3 - 1]) / 2;
        }
        return 0;
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    double result = solution.findMedianSortedArrays(nums1, nums2);

    cout << result << endl;

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        bool neg = 0;
        if(x < 0){
            neg = true;
            x = abs(x);
        }
        string ori = to_string(x);
        string rev = "";
        for(int i = ori.length() - 1;i >= 0;i--){
            rev += ori[i];
        }
        int ans = 0;
        try {
            ans = stoi(rev);
        } catch(const std::out_of_range& e){
            return 0;
        }
        if(neg) return ans * -1;
        return ans;
    }
};

int main() {
    Solution solution;
    
    int x = 123;

    int result = solution.reverse(x);

    cout << result << endl;

    return 0;
}

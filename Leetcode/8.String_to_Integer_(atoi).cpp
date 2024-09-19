#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int i=0;
        bool neg = false;
        while(i<n && s[i] == ' ') i++;
        if(s[i] == '-') {
            neg = true;
            i++;
        }
        else if (s[i] == '+') {
            neg = false;
            i++;
        }
        if(s[i] >= '0' && s[i] <= '9'){
            vector<int> temp;
            bool check = 0;
            for(int j = i;j<n;j++){
                if(s[j] < '0' || s[j] > '9') break;
                if(!check){
                    if(s[j] <= '9' && s[j] >= '1') {
                        check = true;
                        temp.push_back(s[j] - '0');
                    }
                    continue;
                }
                else{
                    temp.push_back(s[j] - '0');
                }
            }
            n = temp.size();
            if(n > 10){
                if(!neg) return INT_MAX;
                return INT_MIN;
            }
            unsigned long long multiplier = pow(10, n-1);
            if (multiplier > INT_MAX) {
                if(!neg) return INT_MAX;
                return INT_MIN;
            }
            long long ans = 0;
            for(int j = 0;j<n;j++){
                ans += temp[j] * multiplier;
                if (ans > INT_MAX) {
                    if(!neg) return INT_MAX;
                    return INT_MIN;
                }
                multiplier /= 10;
            }
            if(neg) return (int)ans * (int)-1;
            return (int)ans;
        }
        else{
            return 0;
        }
    }
};

int main() {
    Solution solution;
    
    string s = "42";

    int result = solution.myAtoi(s);

    cout << result << endl;

    return 0;
}

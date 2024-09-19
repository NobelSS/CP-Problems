#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int check=x;
        long long reversed=0;
        if(x<0) return false;
        else if(x<10) return true;
        int rev = 0;
        while (x!=0) {  
            reversed=reversed*10+(long long)x%10;    
            x/=10;  
        }
        return reversed==check;
    }
};

int main() {
    Solution solution;
    
    int x = 123;

    int result = solution.isPalindrome(x);

    cout << result << endl;

    return 0;
}

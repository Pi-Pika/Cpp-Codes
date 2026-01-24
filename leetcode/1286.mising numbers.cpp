#include <bits/stdc++.h>
#define endl "\n"
#define in long long
#define dub double
#define dubb long double
#define pb push_back
#define pi 3.14159265358979323846
using namespace std;

class Solution {
public:
    int missingNumber(vector<in>& nums) {
        int n = nums.size();
        int sum = n * (n+1) / 2;
        for (in i = 0; i < n; i++) {
            sum -= nums[i];
        }
        return sum; 
    }
};

int main() {
    int nums[] = {3,0,1};
    vector<in> v(begin(nums), end(nums));
    Solution sol;
    cout << sol.missingNumber(v) << endl;
    return 0;
}
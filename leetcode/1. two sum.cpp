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
    vector<in> twoSum(vector<in>& nums, in target) {
        unordered_map <in, in> map;
        for (in i=0; i<nums.size(); i++){
            if(map.find(target - nums[i]) != map.end()){
                return {map[target - nums[i]], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    in nums[] = {2,7,11,15};
    in target = 9;
    vector<in> v(begin(nums), end(nums));
    Solution sol;
    vector<in> rem = sol.twoSum(v, target);
    for (in val : rem) {
        cout << val << " ";
    }
    return 0;
}
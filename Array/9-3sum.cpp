#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <iterator>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(ans.begin(),ans.end());
        for(int i=0;i<nums.size()&&i<=0;i++){
            for (int j = i+1; j < nums.size(); ++j) {
                auto target = find(nums.begin()+j+1,nums.end(),0-nums[i]-nums[j]);
                if(target!=nums.end()&&(target-nums.begin()>j))
                    ans.push_back(vector<int> {nums[i],nums[j],*target});
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> a{0,0,0};
    Solution s{};
    s.threeSum(a);
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <limits>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4)
            return vector<vector<int>> {};
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int size = nums.size();
        for(auto i=0;i<size-3 ;i++){
            if(i>0&&nums[i]==nums[i-1])
                continue;
            for(auto j = i+1;j<size-2;j++){
                if(j>i+1&&nums[j]==nums[j-1])
                    continue;
                auto front = j+1;
                auto back = size-1;
                while(front<back) {
                    int sum = nums[i] + nums[j] + nums[front] + nums[back];
                    if (sum < target) front++;
                    else if (sum > target) back--;
                    else {
                        vector<int> tmp{nums[i], nums[j], nums[front], nums[back]};
                        ans.push_back(tmp);
                        while (front < back && nums[front] == tmp[2])
                            front++;
                        while (front < back && nums[back] == tmp[3])
                            back--;
                    }
                }
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> a {0,4,-5,2,-2,4,2,-1,4};
    Solution S{};
    auto t = S.fourSum(a,0);
    return 0;
}
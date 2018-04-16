#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <limits>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=0,distance=numeric_limits<int>::max();
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++)
        {
            int front = i+1;
            int back = nums.size()-1;

            while(front<back){
                int sum = nums[i]+nums[front]+nums[back];
                int tem_distance;
                if(sum<target){
                    tem_distance = target - sum;
                    if(tem_distance<distance)
                    {
                        distance = tem_distance;
                        ans = sum;
                    }
                    ++front;
                }
                else if(sum>target){
                    tem_distance = sum - target;
                    if(tem_distance < distance)
                    {
                        distance = tem_distance;
                        ans = sum;
                    }
                    --back;

                }
                else
                    return target;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> a{0,2,1,-3};
    Solution s{};
    cout<<s.threeSumClosest(a,1)<<endl;
    return 0;
}
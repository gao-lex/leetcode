#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>&& nums, int target) {
        unordered_map<int,int> myMap;
        for(int i=0;i<nums.size();i++)
            myMap[nums[i]] = i;
        for(int i=0;i<nums.size();i++){
            int rest = target-nums[i];
            if(myMap.find(rest)!=myMap.end()){
                auto a = myMap[rest];
                if(myMap[rest]>i){return vector<int>{i,myMap[rest]};}
                else if(myMap[rest]<i) return vector<int>{myMap[rest],i};
            }
        }

    }
};

int main()
{
    Solution s{};
    s.twoSum(vector<int>{3,2,4},6);
//    unordered_map<int,int> myMap {{3,0},{2,1},{4,2}};
//    cout<<myMap.find(4)->second<<endl;
//    cout<<myMap[4]<<endl;

    return 0;
}
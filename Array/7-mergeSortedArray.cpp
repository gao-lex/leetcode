#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin()+m,nums1.end());
        nums1.insert(nums1.begin(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
    }
    void printArray(vector<int>& v){
        for(auto i:v)
            cout<<i<<" ";
        cout<<endl;
    }
};

int main()
{
    vector<int> a1 {0,1,2,3,5,6};
    vector<int> a2 {0,0,0,2,5,6};
    Solution s{};
    s.merge(a1,a1.size(),a2,a2.size());
    s.printArray(a1);
    return 0;
}
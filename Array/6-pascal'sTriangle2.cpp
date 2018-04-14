#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0)
            return vector<int> {1};
        if(rowIndex == 1)
            return vector<int> {1,1};
        else{
            vector<int> ans={1,1};
            for(int i = 2;i<rowIndex+1;i++){
                for(int j=ans.size()-1;j>0;j--){
                    ans[j] = ans[j]+ans[j-1];
                }
                ans.push_back(1);
            }
            return ans;
        }
    }
};

int main()
{
    Solution s{};
    auto s = s.getRow(3);
    return 0;
}
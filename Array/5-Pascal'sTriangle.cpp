#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back(vector<int>{1});
        ans.push_back(vector<int>{1,1});
        for(int i=2;i<numRows;i++){
            //此行该有i+1个元素
            vector<int> temp(i+1,1);
            for(int j=1;j<i;j++){
                temp[j] = ans.back()[j-1]+ans.back()[j];
            }
            ans.push_back(temp);
        }
        return ans;
    }
    void printPascal(vector<vector<int>> v){
        for(auto i:v){
            for(auto j:i)
                cout<<j<<" ";
            cout<<endl;
        }
    }
};


int main()
{
    Solution s{};
    s.printPascal(s.generate(5));
    return 0;
}
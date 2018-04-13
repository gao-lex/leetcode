/*
    给一个用数组表示的非负整数，将该整数加上一
    除了0本身，该数字不包含任何前导0

    如果某一位+1小于9，前面的就不用算了
*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i=digits.size(); i--; digits[i] = 0)
        if (digits[i]++ < 9)
            return digits;
        digits[0]++;
        digits.push_back(0);
        return digits;
    }
    void printVector(const vector<int>& v ){
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
};


int main()
{
    Solution solu{};
    vector<int> a1 = {9,9,9,9};
    solu.plusOne(a1);
    solu.printVector(a1);
    return 0;
}
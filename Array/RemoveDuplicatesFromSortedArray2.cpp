#include <iostream>

class Solution{
public:
    static int removeDuplicates(int A[],int n){
        int ans=0;
        int flag = 1;
        for(int i=1;i<n;i++)
        {
            if(A[i]==A[ans]&&flag==1)
            {
                flag = 2;
                continue;
                ans++;
            }
            else if(A[i]==A[ans]&&flag==2)
            {
                continue;
            }
            else{
                flag = 1;
                A[ans++] = A[i];
            }
        }
        return ++ans;
    }
};

int main()
{
    int a[] {1,1,1,1,2,2,2,3,3,4};
    std::cout<<Solution::removeDuplicates(a,sizeof(a)/sizeof(int))<<std::endl;
    return 0;
}
#include <iostream>
class Solution
{
  public:
    static int removeDuplicaes(int A[], int n)
    {
        int j=0;
        for (int i = 1; i < n; i++)
        {
            if(A[i]==A[j])
                continue;
            A[++j] = A[i];
        }

        return j+1;
    }
};

int main()
{
    int a[] {1,2,3,4,4,4,4,5,5,5,6,7,8,9};
    std::cout<<Solution::removeDuplicaes(a,sizeof(a)/sizeof(int));
    return 0;

}
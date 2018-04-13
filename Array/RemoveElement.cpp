class Solution{
    public:
        int removeElement(int A[],int n,int elem)
        {
            int i=0,j=0;
            for(;i<n;i++){
                if(A[i]==elem){
                    continue;
                }
                A[j] = A[i];
                j++;
            }
            return j;
        }
};
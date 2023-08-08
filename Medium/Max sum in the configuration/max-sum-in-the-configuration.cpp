//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}

// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int arr[],int N)
{
    /*
    Approach is to calculate the sum of new rotation from the previous rotations.
    This brings up a similarity where only the multipliers of first and last
    element changes drastically and the multiples of every other element increases
    or decreases by 1. So, sum of next rotation can be calculated from sum of present
    rotation.
    
    When array is rotated by 1, following changes happens in sum of i*arr[i]
    -> multiplier of arr[i-1] changes from 0 to n-1; i.e., arr[i-1]*(n-1)
    is added to current value
    -> multipliers of other terms is decremented by 1 i.e., (cum_sum - arr[i-1]) 
    is subtracted from current value where cum_sum is sum of all numbers 
    
    next_val = curr_val - (cum_sum - arr[i-1]) + arr[i-1]*(n-1)
    
    {1,2,3,4}
    cum_sum = 1+2+3+4 = 10
    curr_sum = 1*0 + 2*1 + 3*2 + 4*3 = 20
    
    first iteration i=1
    new_sum = 20 - (10 - 1) + 1*3
    currSum - (sum-arr[i-1]) means we are decrementing other values by 1 i.e., 
    2*(1-1)+3*(2-1)+4*(3-1) = 3 + 4*2 = 11 means subtracting each other digit
    one time from currSum
    
    */
    int ans=0, sum=0, currSum=0;
    for(int i=0; i<N; i++){
        sum+=arr[i];
        currSum+=arr[i]*i;
    }
    ans=currSum;
    for(int i=1; i<N; i++){
        int newSum = currSum - (sum-arr[i-1])+arr[i-1]*(N-1);
        currSum= newSum;
        ans=max(ans,currSum);
    }
    return ans;
}
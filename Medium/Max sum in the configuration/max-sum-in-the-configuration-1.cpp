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
int max_sum(int A[],int N)
{
    int ans= INT_MIN;
    for(int i=0; i<N; i++){
        int currSum = 0;
        // Compute sum of all values. We don't
        // actually rotate the array, instead of that we compute the
        // sum by finding indexes when arr[i] is
        // first element
        for(int j=0; j<N; j++){
            int index = (i+j)%N;
            currSum+=j*A[index];
        }
        ans=max(currSum,ans);
    }
    return ans;
}

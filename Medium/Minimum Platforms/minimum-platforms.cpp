//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	int plat_needed = 1, result = 1;
 
        // Run a nested for-loop to find the overlap
        for (int i = 0; i < n; i++) {
 
            // Initially one platform is needed
            plat_needed = 1;
            for (int j = 0; j < n; j++) {
                if (i != j)
                    // Increment plat_needed when there is an overlap
                    if (arr[i] >= arr[j] && dep[j] >= arr[i])
                        plat_needed++;
        }
 
        // Update the result
        result = max(plat_needed, result);
    }
    return result;
    	
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends
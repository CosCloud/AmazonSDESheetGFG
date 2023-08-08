//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long fSum[n];
        long long bSum[n];
        fSum[0]=a[0];
        bSum[n-1]=a[n-1];
        for(int i=1;i<n; i++){
            fSum[i]=fSum[i-1]+a[i];
        }
        for(int i=n-2; i>=0; i--){
            bSum[i]=bSum[i+1]+a[i];
        }
        
        for(int i=0; i<n; i++){
            if(fSum[i]==bSum[i])return i+1;
        }
        return -1;
    }
};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
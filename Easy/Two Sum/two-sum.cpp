//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
// User function template for C++

// A[] : the input array of positive integers
// N : size of the array arr[]
// X : the required sum
class Solution
{
    public:
    bool keypair(vector<int> A, int N, int X)
    {
        //this code question falls under hashing in the sheet, so I am trying to do it with map
        unordered_map<int,int> mp;
        for(int i=0; i<N; i++){
            mp[A[i]]++;
        }
        for(int i=0; i<N; i++){
            int findVal = X-A[i];
            mp[A[i]]--;
            if(mp[findVal]>0)return true;
            mp[A[i]]++;
        }
        return false;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> array(n);
        Solution ob;
        
        for (int i = 0; i < n; i++) cin >> array[i];
            cout << (ob.keypair(array, n, x) ? "Yes" : "No") << "\n";
    }
    return 0;
}

// } Driver Code Ends

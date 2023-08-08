//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

bool isSubSequence(vector<int> &v1, vector<int> &v2, int n, int m) {

    if (m == 0) return true;
    if (n == 0) return false;

    if (v1[n - 1] == v2[m - 1]) return isSubSequence(v1, v2, n - 1, m - 1);

    return isSubSequence(v1, v2, n - 1, m);
}


// } Driver Code Ends
/*The function returns a vector containing the
increasing sub-sequence of length 3 if present
else returns an empty vector */
class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        vector<int> maxElem(N,-1);
        int maxi = arr[N-1];
        vector<int> minElem(N,-1);
        int mini = arr[0];
        for(int i=N-1; i>=0; i--){
            maxi=max(maxi,arr[i]);
            maxElem[i]=maxi;
        }
        for(int i=0; i<N; i++){
            mini=min(mini,arr[i]);
            minElem[i]=mini;
        }
        
        vector<int> ans;
        for(int i=0; i<N; i++){
            if(arr[i]>minElem[i] && arr[i]<maxElem[i]){
                ans.push_back(minElem[i]);
                ans.push_back(arr[i]);
                ans.push_back(maxElem[i]);
                return ans;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

// Driver program to test above function
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        auto res = obj.find3Numbers(a, n);

        // wrong format output
        if (!res.empty() and res.size() != 3) {
            cout << -1 << "\n";
        }

        if (res.empty()) {
            cout << 0 << "\n";
        } else if ((res[0] < res[1] and res[1] < res[2]) and
                   isSubSequence(a, res, n, res.size())) {
            cout << 1 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
// } Driver Code Ends
//TC - O(n) and SC - O(n)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> ans;
        vector<int> dup(n,0);
        for(int i=0; i<n; i++){
            if(dup[arr[i]]==1){
                dup[arr[i]]=2;
            }
            else if(dup[arr[i]]==0)
                dup[arr[i]]=1;
        }
        
        for(int i=0; i<n; i++){
            if(dup[i]==2)ans.push_back(i);
        }
        if(ans.size()==0)ans.push_back(-1);
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

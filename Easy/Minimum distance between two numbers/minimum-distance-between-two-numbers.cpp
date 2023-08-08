//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        
        int xIndex = -1, yIndex = -1;
        int ans = n;
        for(int i=0; i<n; i++){
            if(arr[i]==x)xIndex=i;
            if(arr[i]==y)yIndex=i;
            
            if(xIndex!=-1 && yIndex!=-1){
                if(yIndex-xIndex > 0){
                    ans=min(yIndex-xIndex,ans);
                }
                else ans=min(xIndex-yIndex,ans);
            }
        }
        if(ans!=n)return ans;
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends
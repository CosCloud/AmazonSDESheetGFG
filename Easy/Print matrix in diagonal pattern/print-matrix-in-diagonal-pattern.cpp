//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         vector<int> ans;
         int n = mat.size();
         int i=0;
         for(int i=0; i<n; i++){
             if(i&1){
                 int row = 0, col = i;
                 while(row<=i)ans.push_back(mat[row++][col--]);
             }
             else{
                 int row = i, col = 0;
                 while(col<=i)ans.push_back(mat[row--][col++]);
             }
         }
         if(n&1){
             for(int i=1; i<n; i++){
                 if(i&1){
                 int row = i, col = n-1;
                 while(row<n)ans.push_back(mat[row++][col--]);
                }
             else{
                 int row = n-1, col = i;
                 while(col<n)ans.push_back(mat[row--][col++]);
                }
             }
         }
         else{
             for(int i=1; i<n; i++){
                 if(!(i&1)){
                 int row = i, col = n-1;
                 while(row<n)ans.push_back(mat[row++][col--]);
                }
             else{
                 int row = n-1, col = i;
                 while(col<n)ans.push_back(mat[row--][col++]);
                }
             }
         }
         return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends
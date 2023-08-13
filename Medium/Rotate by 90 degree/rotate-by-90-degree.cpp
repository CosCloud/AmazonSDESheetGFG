//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);


// } Driver Code Ends
//User function template for C++

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
void rotate(vector<vector<int> >& matrix)
{
    int rowCount = matrix.size();
    int rs = 0, re=rowCount-1;
    int cs = 0, ce=rowCount-1;
    while(rs<=re && cs<=ce){
        int rc=rowCount-1;
        while(rc!=0){
        for(int i=rs+1; i<=re; i++){
            swap(matrix[i][cs],matrix[rs][cs]);
        }
        for(int i=cs+1; i<=ce; i++){
            swap(matrix[re][i],matrix[rs][cs]);
        }
        for(int i=re-1; i>=rs; i--){
            swap(matrix[i][ce],matrix[rs][cs]);
        }
        for(int i=ce-1; i>=cs; i--){
            swap(matrix[rs][i],matrix[rs][cs]);
        }
        rc--;
        }
        rowCount=rowCount-2;
        rs++;
        re--;
        cs++;
        ce--;
    }
    
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}


// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        //TC - O(3n)
        //Using bubble sort logic
        //In ith iteration, bubble sort put the ith largest
        //element at its correct position
        for(int i=0; i<3; i++){
            //run the loop for 3 iteration as we have to find third largest 
            for(int j=0; j<n-1; j++){
                if(a[j]>a[j+1])swap(a[j],a[j+1]);
            }
        }
        return a[n-3];
    }
};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends
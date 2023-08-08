//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        //TC - O(n)
        int max = a[0];
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        
        for(int i=1; i<n; i++){
            if(a[i]>max){
                max2=max1;
                max1=max;
                max=a[i];
            }
            else if(max > a[i] && a[i] > max1){
                max2=max1;
                max1=a[i];
            }
            else if(max1 > a[i] && a[i] > max2){
                max2=a[i];
            }
        }
        return max2;
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

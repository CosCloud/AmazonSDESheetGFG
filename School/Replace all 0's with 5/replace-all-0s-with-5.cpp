//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    int ans=0;
    int place=0;
    // to store the number in the same order ans=ans+rem*pow(10,placevalue)
    while(n!=0){
        int rem = n%10;
        n=n/10;
        if(rem==0)rem=5;
        ans=ans+rem*pow(10,place);
        place++;
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
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends
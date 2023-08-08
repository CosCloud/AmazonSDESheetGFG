//{ Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
     

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int n = sizeOfArray;
        int max = arr[0], max2=-1;
        vector<int> ans;
        
        for(int i=1; i<n; i++){
            if(arr[i]>max){
                max2=max;
                max = arr[i];
            }
            else if(max>arr[i] && arr[i]>max2){
                max2=arr[i];
            }
        }
        ans.push_back(max);
        ans.push_back(max2);
        return ans;
    }
};

//{ Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}
// } Driver Code Ends

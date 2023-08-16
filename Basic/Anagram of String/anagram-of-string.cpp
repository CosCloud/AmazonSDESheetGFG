//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    char arr1[26]={0};
    char arr2[26]={0};
    
    for(int i=0; i<str1.size(); i++){
        int index=str1[i]-'a';
        arr1[index]++;
    }
    for(int i=0; i<str2.size(); i++){
        int index=str2[i]-'a';
        arr2[index]++;
    }
    int count=0;
    for(int i=0; i<26; i++){
        count+=abs(arr1[i]-arr2[i]);
    }
    return count;
}
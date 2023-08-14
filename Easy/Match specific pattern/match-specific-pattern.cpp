//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		    cin>>s[i];
		
		string tt;
		cin>>tt;
		
		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		    cout<<res[i]<<" ";
		cout<<endl;
		
	}
}
// } Driver Code Ends


/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */
string code(string s){
    int n=s.size();
    string ans="";
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        ans+=to_string(mp[s[i]]);
    }
    return ans;
}
vector<string> findMatchedWords(vector<string> dict,string pattern)
{
       //Your code here
       vector<string> v;
       string pat=code(pattern);
       for(int i=0;i<dict.size();i++){
           if(pat==code(dict[i])){
               v.push_back(dict[i]);
           }
       }
       return v;
}
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string>  spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}

// } Driver Code Ends


/*You have to complete this function*/
void createString(string s,string temp, int start, vector<string>&ans){
    if(start==s.length()){
        ans.push_back(temp);
        return;
    }
    if(temp.length()==0)
        createString(s,temp+s[start], start+1, ans);
    else{
        createString(s,temp+s[start],start+1,ans);
        createString(s,temp+" "+s[start],start+1,ans);
    }
}
vector<string>  spaceString(char str[])
{
    string s(str);
    vector<string> ans;
    createString(s,"",0,ans);
    return ans;
}
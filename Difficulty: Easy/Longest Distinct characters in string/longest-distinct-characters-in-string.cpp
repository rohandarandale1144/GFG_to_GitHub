//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
    map<char, int>mp;
    int n=s.size();
    if(n<=1){
        return 1;
    }
    int cnt=0;
    for(int i=0, j=0;j<n;j++){
        if(mp[s[j]]>0){
            i=max(i, mp[s[j]]);
        }
        cnt=max(cnt, j-i+1);
        mp[s[j]]=j+1;
    }
    return cnt;
}
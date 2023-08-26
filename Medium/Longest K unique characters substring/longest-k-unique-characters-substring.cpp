//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int ans=0, maxSize=-1;;
    int start=0;
    unordered_map<char, int>mp;
    
    for(int end=0;end<s.size();end++)
    {
        mp[s[end]]++;
        
        while(mp.size() > k)
        {
            mp[s[start]]--;
            
            if(mp[s[start]]==0)
            {
                mp.erase(s[start]);
            }
            start++;
        }
        
        if(mp.size() == k && end-start+1> maxSize)
        {
            maxSize=end-start+1;
            ans=start;
        }
    }
    return maxSize;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends
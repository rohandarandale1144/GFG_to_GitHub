//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int n=a.size();
        int m=b.size();
        map<char, int>mp;
        if(n!=m){
            return false;
        }
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        for(int i=0;i<m;i++){
            if(mp.find(b[i])!=mp.end()){
                mp[b[i]]--;
            }
        }
        for(auto it:mp){
            if(it.second>=1){
                return false;
            }
        }
        return true;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends
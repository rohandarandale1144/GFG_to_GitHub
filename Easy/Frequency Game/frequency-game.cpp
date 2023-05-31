//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        vector<int>ans;
        
        map<int, int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int mini=INT_MAX;
        int maxi=-1;
        
        for(auto it:mp)
        {
            if(it.second < mini)
            {
                mini=it.second;
                //mini=it.second;
            }
        }
        for(auto x:mp)
        {
            if(x.second==mini)
            {
                ans.push_back(x.first);
            }
        }
        int res=*max_element(ans.begin(), ans.end());
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends
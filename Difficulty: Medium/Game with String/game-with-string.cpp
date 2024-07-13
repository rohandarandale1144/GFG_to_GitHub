//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minValue(string s, int k) {
        // code here
        int ans=0;
        map<char, int>mp;
        for(char c:s){
            mp[c]++;
        }
        priority_queue<int>pq;
        for(auto it:mp){
            pq.push(it.second);
        }
        while(k--){
            int top=pq.top();
            pq.pop();
            top=top-1;
            pq.push(top);
        }
        while(!pq.empty()){
            int top=pq.top();
            ans+=top*top;
            pq.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int k;
        cin >> s >> k;

        Solution ob;
        cout << ob.minValue(s, k) << "\n";
    }
    return 0;
}
// } Driver Code Ends
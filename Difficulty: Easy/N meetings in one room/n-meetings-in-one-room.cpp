//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    
    int static cmp(pair<int, int>&a, pair<int, int>&b){
        return a.second<b.second;
    }
    
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        vector<pair<int, int>>v;
        for(int i=0;i<n;i++){
            pair<int, int>pp=make_pair(start[i], end[i]);
            v.push_back(pp);
        }
        sort(v.begin(), v.end(), cmp);
        int limit=v[0].second;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(v[i].first>limit){
                limit=v[i].second;
                cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
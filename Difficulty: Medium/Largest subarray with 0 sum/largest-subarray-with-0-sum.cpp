//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        map<int, int>mp;
        int cSum=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            cSum+=arr[i];
            if(cSum==0){
                maxi=i+1;
            }
            if(mp.find(cSum)!=mp.end()){
                maxi=max(maxi, i-mp[cSum]);
            }
            if(mp.find(cSum)==mp.end()){
                mp[cSum]=i;
            }
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
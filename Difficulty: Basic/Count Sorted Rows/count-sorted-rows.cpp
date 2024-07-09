//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int sortedCount(int n, int m, vector<vector<int>> mat) {
        // code here
        int cnt=0;
        for(int i=0;i<n;i++){
            bool inc=true, dec=true;
            for(int j=1;j<m;j++){
                if(mat[i][j] <= mat[i][j-1]){
                    inc=false;
                }
                if(mat[i][j] >= mat[i][j-1]){
                    dec=false;
                }
            }
            if(inc || dec){
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
        int N, M;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.sortedCount(N, M, Mat) << "\n";
    }
}
// } Driver Code Ends
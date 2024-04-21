//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int minOne=0;
        int minRow=1;
        for(int i=0;i<m;i++){
            if(a[0][i]==1){
                minOne++;
            }
        }
        for(int i=1;i<n;i++){
            int oneCnt=0;
            for(int j=0;j<m;j++){
                if(a[i][j]==1){
                    oneCnt++;
                }
            }
            if(oneCnt < minOne){
                minOne=oneCnt;
                minRow=i+1;
            }
        }
        return minRow;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}
// } Driver Code Ends
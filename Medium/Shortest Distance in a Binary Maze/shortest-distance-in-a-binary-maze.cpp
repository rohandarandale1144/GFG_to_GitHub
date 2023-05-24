//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source, pair<int, int> destination) {
        // code here
        queue<pair<pair<int, int>, int>>q;
        
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>dist(n, vector<int>(m, 0));
        
        dist[source.first][source.second]=1;
        
        q.push({source, 0});
        
        int delrow[]={-1, 0, 1, 0};
        int delcol[]={0, 1, 0, -1};
        
        while(!q.empty())
        {
            int i=q.front().first.first;
            int j=q.front().first.second;
            
            int dis=q.front().second;
            if(i == destination.first && j == destination.second)
            return dis;
            
            q.pop();
            
            for(int k=0;k<4;k++)
            {
                int newr=i+delrow[k];
                int newc=j+delcol[k];
                
                
                if(newr>=0 && newr<n && newc>=0 && newc<m && grid[newr][newc]==1 && !dist[newr][newc])
                {
                    dist[newr][newc]=1;
                    
                    q.push({{newr, newc}, dis+1});
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends
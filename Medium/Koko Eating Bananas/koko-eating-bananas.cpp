//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int findmax(vector<int>&v)
{
    int maxi=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        maxi=max(maxi, v[i]);
    }
    return maxi;
}

int calculate(vector<int>&v, int hour)
{
    int total=0;
    for(int i=0;i<v.size();i++)
    {
        total+=ceil((double) v[i] / (double ) hour);
    }
    return total;
}

class Solution {
  public:
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int low=1, high=findmax(piles);
        while(low<=high)
        {
            int mid=(low+high)/2;
            int total=calculate(piles, mid);
            if(total<=H)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
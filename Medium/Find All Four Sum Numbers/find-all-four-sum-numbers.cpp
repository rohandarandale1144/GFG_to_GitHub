//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int K) {
        // Your code goes here
        vector<vector<int>>ans;
        sort(arr.begin(), arr.end());
        int n=arr.size();
        set<vector<int>>s;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int k=j+1;
                int l=n-1;
                
                while(k<l)
                {
                    long long sum=arr[i]+arr[j]+arr[k]+arr[l];
                    
                    if(sum == K)
                    {
                        s.insert({arr[i], arr[j], arr[k], arr[l]});
                    
                        //ans.push_back(s);
                        k++;
                        l--;
                    }
                    else if(sum < K)
                    {
                        k++;
                    }
                    else
                    {
                        l--;
                    }
                }
            }
        }
        for(auto x:s)
        {
            ans.push_back(x);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
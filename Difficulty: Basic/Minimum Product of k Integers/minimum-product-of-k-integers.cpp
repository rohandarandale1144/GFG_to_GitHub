//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int minProduct(int arr[], int n, int k)
    {
        // Complete the function
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
            int cnt=0;
            long long ans=1;
            while(pq.empty()==false && cnt<k){
                ans=(ans*pq.top())%1000000007;
                pq.pop();
                cnt++;
            }
        return (int)ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cin>>k;
        Solution ob;
	    cout<<ob.minProduct(arr, n, k)<<endl;
    }
	return 0;
}

// } Driver Code Ends
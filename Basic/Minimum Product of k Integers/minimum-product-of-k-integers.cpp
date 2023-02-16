//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int minProduct(int arr[], int n, int k)
    {
        // Complete the function
        long ans=1, res;
        sort(arr, arr+n);
        for(int i=0;i<k && i<n;i++)
        {
            ans=(ans*arr[i])%1000000007;
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
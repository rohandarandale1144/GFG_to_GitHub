//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here  
        int sum=0;
        int cnt=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            
            while(sum>x)
            {
                mini=min(mini, i+1-cnt);
                sum-=arr[cnt];
                cnt++;
            }
        }
        return mini!=INT_MAX ? mini : 0;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends
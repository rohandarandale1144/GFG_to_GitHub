//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    /*int ans[n]={0};
	    int pos=0, neg=1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	            ans[pos]=arr[i];
	            pos+=2;
	        }
	        else
	        {
	            ans[neg]=arr[i];
	            neg+=2;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        arr[i]=ans[i];
	    }*/
	    vector<int>pos, neg;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	            pos.push_back(arr[i]);
	        }
	        else
	        {
	            neg.push_back(arr[i]);
	        }
	    }
	    int i=0, j=0, k=0;
	    
	    while( i < n)
	    {
	        if(j < pos.size())
	        {
	            arr[i]=pos[j];
	            i++;
	            j++;
	        }
	        if(k < neg.size())
	        {
	            arr[i]=neg[k];
	            i++;
	            k++;
	        }
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
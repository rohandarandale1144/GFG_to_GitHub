//{ Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        // Complete the function
    int cnt=0;
    int low=0, high=n-1;
    
        while(low<high)
        {
            if(arr[low]+arr[high]<sum)
            {
                low++;
            }
            //cnt++;
            else if(arr[low]+arr[high]>sum)
            high--;
            else 
            {
                cnt++;
                low++;
                high--;
            }
        }
    if(cnt==0)
    return -1;
    else
    return cnt;
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends
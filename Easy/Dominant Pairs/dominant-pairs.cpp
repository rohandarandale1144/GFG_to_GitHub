//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        sort(arr.begin(), arr.begin()+n/2, greater<int>());
        sort(arr.begin() + n/2, arr.end(), greater<int>());
        
        int cnt=0;
        int low=0, high=n/2;
        while(low < n/2 && high < n)
        {
            if(arr[low] >= 5*arr[high])
            {
                cnt+=(n-high);
                low++;
            }
            else
            {
                high++;
            }
            
        }
        return cnt;
        
        /*Approach:02 (Brute Force) T.C. O(n2)
        for(int i=0;i<n/2;i++)
        {
            for(int j=n/2;j<n;j++)
            {
                if(arr[i] >= 5*arr[j])
                {
                    cnt++;
                }
            }
        }
        return cnt;*/
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<int, int>mp;
        int cSum=0;
        int maxi=0;
        for(int i=0;i<N;i++){
            cSum+=A[i];
            if(cSum==K){
                maxi=i+1;
            }
            
            if(mp.find(cSum-K)!=mp.end()){
                maxi=max(maxi, i-mp[cSum-K]);
            }
            
            if(mp.find(cSum)==mp.end()){
                mp[cSum]=i;
            }
        }
        return maxi;
    }
        
        
        
        
        // Complete the function
    //     int maxi=INT_MIN;
    //     for(int i=0;i<N;i++){
    //         int sum=0;
    //         sum+=A[i];
    //         for(int j=i+1;j<N;j++){
    //             sum+=A[j];
    //             if(sum==K){
    //                 maxi=max(maxi, j-i+1);
    //                 break;
    //             }
    //         }
    //     }
    //     return (maxi==INT_MIN ? 0 : maxi);
    // } 
};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i=n-1;
            int j = 0;
            while(i>=0 and j<m and arr1[i]>arr2[j])
            {
                swap(arr1[i--],arr2[j++]);
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
            /*int a=0, b=0, c=0;
            long long arr3[n+m];
            while(a<n && b<m)
            {
                if(arr1[a]<arr2[b])
                {
                    arr3[c++]=arr1[a++];
                }
                else
                {
                    arr3[c++]=arr2[b++];
                }
            }
            while(a<n)
            {
                arr3[c++]=arr1[a++];
            }
            while(b<m)
            {
                arr3[c++]=arr2[b++];
            }*/
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends
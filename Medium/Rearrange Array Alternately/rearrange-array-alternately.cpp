//{ Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	/*int *arr1=new int[n];
    	// Your code here
    	for(int i=0;i<(n/2);i++)
    	{
    	    arr1[2*i+1]=arr[i];
    	}
    	for(int i=0;i<n;i++)
    	{
    	    arr1[2*i]=arr[n-1-i];
    	}
    	for(int i=0;i<n;i++)
    	{
    	    arr[i]=arr1[i];
    	}
    	*/
    	
    	
    	vector<int> v(n,0);
        int maxi=0,mini=0;
            for(int i=0;i<n;i++){
                if(i%2==0){
                    v[i]=arr[n-1-maxi];
                    maxi++;
                }
                else{
                    v[i]=arr[mini];mini++;
                }
            }
            for(int i=0;i<n;i++){
                arr[i]=v[i];
            }
    }
};

//{ Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends
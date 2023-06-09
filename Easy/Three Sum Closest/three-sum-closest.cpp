//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        sort(arr.begin(), arr.end());
     
        int maxi=INT_MAX;
        
        for(int i=0;i<arr.size()-2;i++)
        {
            int low=i+1;
            int high=arr.size()-1;
            
            while(low<high)
            {
                int triplet=arr[i]+arr[low]+arr[high];
                
                if(triplet == target)
                {
                    return target;
                }
                
                if(abs(target-triplet)<abs(target-maxi))
                {
                    maxi=triplet;
                }
               
               if(abs(target-triplet)==abs(target-maxi))
               {
                   maxi=max(triplet,maxi);
               }
               
                if(triplet > target)
                {
                    high--;
                }
                
                else
                {
                    low++;
                }
            }
        }
        return maxi;
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        Solution obj;
        cout << obj.threeSumClosest(vec, target) << "\n";
    }
}

//Position this line where user code will be pasted.

// } Driver Code Ends
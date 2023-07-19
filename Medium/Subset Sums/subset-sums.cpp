//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

void find(int idx, vector<int>A, vector<int>&ans, int sum){
        
        //int sum=0;
        if(idx==A.size()){
            ans.push_back(sum);
            return ;
        }
        
        //Exclude
        find(idx+1, A, ans, sum);
        
        //Include
        find(idx+1, A, ans, sum+A[idx]);
    }
class Solution
{
public:
    vector<int> subsetSums(vector<int> A, int N)
    {
        // Write Your Code here
        vector<int>ans;
        int sum=0;
        find(0, A, ans, sum);
        //sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
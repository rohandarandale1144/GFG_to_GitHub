//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    private:
    void find(int idx, vector<int>arr, int n, vector<int>res, set<vector<int>>&st){
        if(idx==n)
        {
            sort(res.begin(), res.end());
            st.insert(res);
            return;
        }
        //Exclude
        find(idx+1, arr, n, res, st);
        
        //Include
        int ele=arr[idx];
        res.push_back(ele);
        
        find(idx+1, arr, n, res, st);
    }
    public:
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        vector<vector<int>>ans;
        vector<int>res;
        set<vector<int>>st;
        
        find(0, arr, n, res, st);
        
        for(auto it:st){
            ans.push_back(it);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends
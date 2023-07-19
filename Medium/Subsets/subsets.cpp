//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
void find(int idx, vector<int>&A, vector<int>res, vector<vector<int>>&ans){
        
        if(idx==A.size()){
            ans.push_back(res);
            return ;
        }
        
        //Exclude
        find(idx+1, A, res, ans);
        
        //Include
        int ele=A[idx];
        res.push_back(ele);
        
        find(idx+1, A, res, ans);
    }
    
class Solution
{
    public:
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<vector<int>>ans;
        vector<int>res;
        find(0, A, {}, ans);
        sort(ans.begin(), ans.end());
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
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends
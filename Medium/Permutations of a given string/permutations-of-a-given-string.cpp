//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
    void solve(string s, int idx, set<string>&st)
    {
        if(idx>=s.size())
        {
            st.insert(s);
            return;
        }
        for(int j=idx;j<s.size();j++)
        {
            //Swapping elements with itself 
            swap(s[idx], s[j]);
            
            //Reucrive call till end of the array (a->b->c)
            solve(s, idx+1, st);
            
            //Swap to original input for the next recursive call
            swap(s[idx], s[j]);
        }
    }
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    
		    //TO insert the permutations for one time
		    set<string>st;
		    int idx=0;
		    solve(S, idx, st);
		    //Returning the answer in the vector
		    vector<string>ans(st.begin(), st.end());
		    
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    static bool compare(pair<int, int>a, pair<int, int>b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second>b.second;
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        map<int, int>mp;
        vector<int>v;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<pair<int, int>>p;
        for(auto it:mp){
            p.push_back(it);
        }
        sort(p.begin(), p.end(), compare);
        for(auto it:p){
            int cnt=it.second;
            while(cnt--){
                v.push_back(it.first);
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends
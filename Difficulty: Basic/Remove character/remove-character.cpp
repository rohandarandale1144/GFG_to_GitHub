//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string s1, string s2) {
        // code here
        string ans="";
        int n=s1.size();
        int m=s2.size();
        // sort(s1.begin(), s1.end());
        // sort(s2.begin(), s2.end());
        set<char>st;
        for(int i=0;i<m;i++){
            st.insert(s2[i]);
        }
        for(int i=0;i<n;i++){
            if(st.find(s1[i])==st.end()){
                ans.push_back(s1[i]);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends
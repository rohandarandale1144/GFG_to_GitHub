//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

string find(string s1, string s2){
    int n=min(s1.size(), s2.size());
    string res="";
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            break;
        }
        res+=s1[i];
    }
    return res;
}

string solve(vector<string>&arr, int n){
    string pre=arr[0];
    for(int i=1;i<n;i++){
        pre=find(pre, arr[i]);
    }
    return (pre);
}
class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int n=arr.size();
        string ans=solve(arr, n);
        return ans.size()>0?ans:"-1";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends
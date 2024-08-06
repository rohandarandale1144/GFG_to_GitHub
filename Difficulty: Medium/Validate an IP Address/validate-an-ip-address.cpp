//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
  public:
    int isValid(string str) {
        // code here
        int n=str.size();
        string s="";
        int cnt=0;
        for(int i=0;i<=n;i++){
            if(str[i]!='.' && i<n){
                s+=str[i];
            }
            if(str[i]=='.' || i==n-1){
                if(s.empty()){
                    return false;
                }
                if(s.size()>1 && s[0]=='0'){
                    return false;
                }
                int sum=0;
                for(char c:s){
                    if(!isdigit(c)){
                        return false;
                    }
                    sum=sum*10+(c-'0');
                }
                if(sum<0 || sum>255){
                    return false;
                }
                s="";
                cnt++;
                
                if(cnt>4){
                    return false;
                }
            }
        }
        return cnt==4;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends
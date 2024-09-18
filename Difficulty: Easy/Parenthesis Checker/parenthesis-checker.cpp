//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        int n=x.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            char ch=x[i];
            if(ch=='(' || ch=='[' || ch=='{'){
                st.push(ch);
            }else{
                if(!st.empty()){
                    char top=st.top();
                    if(ch==')' && top=='(' ||
                       ch==']' && top=='[' ||
                       ch=='}' && top=='{'){
                           st.pop();
                       }else{
                           return false;
                       }
                }else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
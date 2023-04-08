//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}


// } Driver Code Ends


//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    stack<char>st;
    for(int i=0;i<len;i++)
    {
        char ch=S[i];
        st.push(ch);
    }
    string ans="";
    while(!st.empty())
    {
        char ch=st.top();
        ans.push_back(ch);
        st.pop();
    }
    char *result=new char[ans.length()+1];
    strcpy(result, ans.c_str());
    
    return result;
}
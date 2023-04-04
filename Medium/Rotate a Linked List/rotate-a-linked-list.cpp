//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

#include<vector>
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        /*
        vector<int>v, ans;
        Node*temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->data);
            temp=temp->next;
        }
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            ans[i]=v[(i+k)%n];
        }
        for(int i=0;i<ans.size();i++)
        {
            v[i]=ans[i];
        }
        */
        Node*curr=head;
        Node*temp=NULL;
        
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=head;
        curr=head;
        
        for(int i=0;i<k-1;i++)
        {
            curr=curr->next;
        }
        temp=curr->next;
        curr->next=NULL;
        return temp;
    }
};
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends
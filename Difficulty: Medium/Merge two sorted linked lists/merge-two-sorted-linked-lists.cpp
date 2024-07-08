//{ Driver Code Starts
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends


 

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
#include<bits/stdc++.h>
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    vector<int>a, b, c;
    Node*curr1=head1;
    Node*curr2=head2;
    while(curr1){
        a.push_back(curr1->data);
        curr1=curr1->next;
    }
    while(curr2){
        b.push_back(curr2->data);
        curr2=curr2->next;
    }
    int m=a.size();
    int n=b.size();
    int i=0, j=0, k=0;
    c.resize(a.size()+b.size());
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<m){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }
    Node*temp=new Node(-1);
    Node*dummy=temp;
    int sz=c.size();
    for(int i=0;i<sz;i++){
        dummy->next=new Node(c[i]);
        dummy=dummy->next;
    }
    return temp->next;
}  
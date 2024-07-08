//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert(int n1)
{
    int n,value;
    n=n1;
    struct Node *temp;
    
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp=start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp=temp->next;
        }
    }
}

// } Driver Code Ends
/*
delete n nodes after m nodes
  The input list will have at least one element  
  Node is defined as 

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
Node *curr = head, *t;  
    int count;  
  
    // The main loop that traverses 
    // through the whole list  
    while (curr)  
    {  
        // Skip M nodes  
        for (count = 1; count < M &&  
                curr!= NULL; count++)  
            curr = curr->next;  
  
        // If we reached end of list, then return  
        if (curr == NULL)  
            return;  
  
        // Start from next node and delete N nodes  
        t = curr->next;  
        for (count = 1; count<=N && t!= NULL; count++)  
        {  
            Node *temp = t;  
            t = t->next;  
            free(temp);  
        }  
          
        // Link the previous list with remaining nodes  
        curr->next = t;  
  
        // Set current pointer for next iteration  
        curr = t;  
    }  
*/
class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here   
        struct Node*curr=head;
        struct Node*t;
        
        while(curr){
            for(int cnt=1;cnt<M && curr!=NULL; cnt++){
                curr=curr->next;
            }
            if(curr==NULL){
                return;
            }
            t=curr->next;
            for(int cnt=1;cnt<=N && t!=NULL;cnt++){
                Node*temp=t;
                t=t->next;
                free(temp);
            }
            curr->next=t;
            curr=t;
        }
    }
};



//{ Driver Code Starts.
int main()
{
    int t,n1;
    cin>>t;
    while (t--) {
        cin>>n1;
        int m,n;
        cin>>m;
        cin>>n;
        insert(n1);
        Solution ob;
        ob.linkdelete(start,m,n);
        printList(start);
    }
    
    return 0;
}

// } Driver Code Ends
#include<bits/stdc++.h>
using namespace std;
 int cnt = 0;

class node {
   public:
    int data;
    node* next;
};

node* createNode(int data)
{
    node *p = new node();
    if(!p)
        {
            printf("Segmentation fault");
            return;
        }
        p->data = data;
    return p;
}

void traverseLL(node *head)
{
    node *p = head;
    while(p)
    {
        cout << p -> data << " " ;
        cnt++;

    }
}

node* insert(int pos, node* head)
{
    node* p = head;
    node* q;
    int k = 1;
    node* newnode = createNode(5);
    if(pos == 1)
    {
        newnode -> next = p;
        head = newnode;
        return head;
    }
    else
    {
    while (p!=NULL && k<pos)
    {
       k++;
       q = p;
       p = p->next;
    }


    q->next = newnode;
    newnode -> next = p;

    }
    return head;
    
}

node* deleteLL(int pos , node* head)
{
    node *p, *q;
    p = head;
    int k = 1;
    if(!head)
    {
        cout << "Empty list, cannot delete";
    }

    if(pos == 1)
    {
        head = head -> next;
        free(p);
    }

    else
    {
        while (p!=NULL && k<pos)
        {
            k++;
            q = p;
            p = p -> next;
        }

        if(!p)
        {
            cout << "position do not exists" << endl;
            return 0;
        }
        else
        {
            q -> next = p -> next;
             free(p);
        }
        
    }

}

int main()
{
    node *head = insert(1, )
}
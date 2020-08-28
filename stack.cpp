#include<iostream>
using namespace std;
#define size 101 

template<class T>
class Stack {

    T A[size];
    T top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T x)
    {
        if(top == size-1)
            {
                cout << "stack overflow" <<endl;
                    return;
            }
        A[++top] = x;
    }

    T pop()
    {
        if(top == -1)
        {
            cout << "Stack underflow, i.e. stack is empty"<< "\n";
        }
        return A[top--];
    }

    bool isEmpty()
    {
        return (top == -1);
    }

    void show_stack()
    {
        cout <<"Stack Elemets are:" <<endl;
        for(int i=0; i<=top; i++)
            cout << A[i] << " " ;
        
        cout <<endl;    
    }

    T top_iterator()
    {
        return top;
    }
};

template<class T>
class Queue {
    T q[size];
    T front;
    T rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(T x)
    {
        if(rear == -1)
        {
            rear++;
            front++;
            q[rear] = x;
        }

        else if(rear == size-1) {
            cout << "queue is full, error inserting" << endl; 
        }

        else {
        q[++rear] = x;
        }
    }

    T dequeue()
    {
        if(front == -1 || front == size-1)
            { cout << " queue is empty, error removing" <<endl;
                return;
            }
        else 
            return q[front++];   
    }

    void show_queue()
    {
        cout <<"Queue Elemets are:" <<endl;
        for(int i=front; i<=rear; i++)
            cout << q[i] << " " ;
        
        cout <<endl; 
    }

    void front_rear_position()
    {
        cout <<"front: " << front << endl;
        cout <<"rear: " << rear <<endl;
    }
    
};

class Linkedlist {
    Linkedlist* head;
    int data;
    Linkedlist* next;

    public:
        Linkedlist()
        {
            head = NULL;
        }

    Linkedlist* createNode()
    {
        Linkedlist* node;
        node = new Linkedlist;

        return node;
    }    

    void insert(int x, int pos=0)
    {
        Linkedlist* nnode = createNode();
        if(!head)
        {
            head = nnode;
            head -> data = x;
            head -> next = NULL;
            return;
        }

        while(pos - 2 > 0)
        {
            Linkedlist* tmp = head;
            tmp = tmp->next;
            nnode -> next = tmp -> next;
            tmp -> next = nnode;
        }

        pos--;
    }

    void traverse()
    {
        if(!head)
        {
            cout << "Linkedlist is empty" << endl;
            return;
        }

        for(Linkedlist *p = head; p!=NULL; p++)
            cout << p->data << " ";


    }

    int remove(int pos)
    {
        Linkedlist* tmp = head;
        if(!head)
        {
            cout <<"LinkedlIst is empty, cannot remove: ERROR" << endl;
            return -1;
        }

        if(head->next == NULL)
        {
            int x = tmp->data;
            delete(tmp);
            return x;
        }

        while(pos - 2 > 0)
        {
            tmp = tmp -> next;

        }
        Linkedlist* tmp1 = tmp->next;

        int x = tmp1->data;
        tmp -> next = tmp -> next -> next;

        delete(tmp1);

        return x;

    }

};

int main()
{
    // Stack <char> s1;
    // s1.push('a');
    // s1.push('b');
    // s1.push('c');
    // s1.push('d');
    // s1.push('e');
    // s1.push('f');
    // s1.show_stack(); // 12 2 22 17 11 23
    // s1.pop();
    // s1.pop();
    // cout << s1.isEmpty() << endl; //false
    // cout << s1.top_iterator() <<endl; //3
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.show_stack(); //12
    // s1.pop();
    // cout << s1.isEmpty() << endl; //true
    // s1.pop(); // underflow


    // Queue <int> q1;
    // q1.dequeue();
    // q1.enqueue(1);
    // q1.enqueue(2);
    // q1.enqueue(3);
    // q1.enqueue(4);
    // q1.front_rear_position();
    // q1.enqueue(5);
    // q1.dequeue();
    // q1.enqueue(6);
    // q1.enqueue(7);
    // q1.enqueue(8);
    // q1.show_queue();

    Linkedlist l1;
    l1.traverse();
    cout << l1.remove(2);
    l1.insert(1);
    l1.insert(2,2);
    l1.insert(3,3);
    l1.insert(4,4);
    l1.insert(15,5);
    l1.insert(26,6);
    l1.traverse();
    l1.remove(2);
    l1.remove(4);
    l1.traverse();

}
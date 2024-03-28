#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    //constructor...
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    // destructor..
    ~Node()
    {
        int value = this->data;
        // memory free..
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};
// inset before the first node ...
void insertFirst(Node* &head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
// inserting between the nodes of linkList...
void insertPosition(Node* &tail, Node* &head, int position, int data)
{
    if(position == 1)
    {
        insertFirst(head, data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }
    // inserting after tail ...
    if(temp->next == NULL)
    {
        insertFirst(head, data);
        return;
    }

    // now creating a node for data...
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next=nodeToInsert;
}
// insert at end of node ...
void insertTail(Node* &tail, int data)
{
    Node* temp = new Node(12);
    tail->next=temp;
    tail=temp;
}

// deleting node in a linklist ...

void deleteNode(int position, Node* &head)
{
    // deleting first or start node..
    if(position == 1)
    {
        Node* temp = head;
        head = head -> next;
        // memory free start node...
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node* curr = head;
        Node * prev = NULL;

        int count = 1;
        while(count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev-> next = curr->next;
        curr-> next = NULL;
        delete curr;
    }

}
void print(Node* &head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *node1 = new Node(10);
    //Node *node1 = new Node(12);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertFirst(head, 12);
    print(head);
    // again inserting ..
    insertFirst(head, 15);
    print(head);
    insertFirst(head, 17);
    print(head);
    insertFirst(head, 20);
    print(head);

    insertPosition(tail,head, 2, 18);
    print(head);
    
    cout<<"Head Data - " <<head->data<<" "<<endl;
    cout<<"Tail Data - " <<tail->data<<" "<<endl;
    // printing the inserted value after the head node ...
    // insertTail(tail, 12);
    // print(head);
    // insertTail(tail,14);
    // print(head);

    // deleting node ..

    deleteNode(1,head);
    print(head);
    return 0;
}
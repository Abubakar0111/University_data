#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

node *Create_Node(node *Current, int data)
{
    node *new_node = new node();
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = Current;
    Current->next = new_node;
    // Current->prev =
    return new_node;
};
void OutPut(node *Head)

{
    node *current = Head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
};

int pop(node *head)
{
    node *Head = head;
    if (Head == NULL) //is empty
    {
        cout << "GO BACKKKKK";
    }
    if (Head->next == NULL) //if there is only one node
    {
        int data = Head->data;
        Head = NULL;
        return data;
    }
    node *temp = head;
    node *pre;

    while (temp->next != NULL) //checking list
    {
        pre = temp;
        temp = temp->next;
    }
    int data = temp->data;
    pre->next = NULL;
    return data;
}
int main()
{
    node *Head = new node();
    Head->data = 10;
    Head->next = NULL;
    Head->prev = NULL;

    node *current = Head;
    current = Create_Node(current, 20);
    current = Create_Node(current, 30);

    OutPut(Head);

    cout << "POP ::::: " << pop(Head) << "  \n";
    OutPut(Head);
}
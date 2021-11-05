#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *Create_Node(node *Current, int data)
{
    node *new_node = new node();
    new_node->data = data;
    new_node->next = NULL;
    Current->next = new_node;
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
node *Push(node *Current, int data)
{
    node *Head = new node();

    node *New_node = Create_Node(Current, data); //TO CREATE NEW NODE
    if (Head->next == NULL)                      // Setuation 1
    {
        Head = New_node;
        return New_node;
    }

    node *last = Head;
    while (last->next != NULL) //Setuation 2
    {
        last = last->next;
    }
    last->next = New_node;
    return New_node;
}
int main()
{
    node *Head = new node();
    Head->data = 10;
    Head->next = NULL;

    node *current = Head;
    current = Create_Node(current, 20);
    // current = Create_Node(current, 30);

    OutPut(Head);
    current = Push(current, 40);
    OutPut(Head);
    current = Push(current, 50);
    OutPut(Head);
}
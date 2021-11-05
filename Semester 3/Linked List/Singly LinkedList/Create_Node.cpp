#include <iostream>

using namespace std;
struct node
{
    int data;
    node *next;
};
node *Create_Node(node *Current, int Data)
{
    node *New_Node = new node();
    New_Node->data = Data;
    New_Node->next = NULL;

    Current->next = New_Node;

    return New_Node;
}
void Output(node *Head)
{
    node *OutPut = Head;
    while (OutPut != NULL)
    {
        cout << OutPut->data << " ";
        OutPut = OutPut->next;
    }
}
int main()
{
    node *Head;
    Head = new node();
    Head->data = 0;
    Head->next = NULL;

    node *Current = new node;

    Current = Head;
    Current = Create_Node(Current, 1);
    Current = Create_Node(Current, 2);
    Current = Create_Node(Current, 3);

    Output(Head);
}
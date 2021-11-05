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
int Counter(node *Head)
{
    int count = 0;
    while (Head != NULL)
    {
        count++;
        Head = Head->next;
    }
    return count;
}

int main()
{
    node *Head;
    Head = new node();
    Head->data = 0;
    Head->next = NULL;

    node *Current = new node;

    Current = Head;
    Current = Create_Node(Current, 0);
    Current = Create_Node(Current, 0);
    Current = Create_Node(Current, 0);
    Output(Head);
    cout << "\nThe size of list is : " << Counter(Head) << endl;
    Current = Create_Node(Current, 0);
    Output(Head);

    cout << "\nThe size of list is : " << Counter(Head) << endl;
}
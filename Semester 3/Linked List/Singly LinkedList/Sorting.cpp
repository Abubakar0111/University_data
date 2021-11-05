#include <iostream>

using namespace std;
struct node
{
    int Data;
    node *Next;
};
node *Create_Node(node *Current, int Data)
{
    node *New_Node = new node();
    New_Node->Data = Data;
    New_Node->Next = NULL;

    Current->Next = New_Node;

    return New_Node;
}
void Output(node *Head)
{
    node *OutPut = Head;
    while (OutPut != NULL)
    {
        cout << OutPut->Data << " ";
        OutPut = OutPut->Next;
    }
    cout << endl;
}
void sort(node *head)
{
    struct node *ptr, *index;
    int temp;
    ptr = head;
    while (ptr->Next != NULL)
    {
        index = ptr->Next;
        while (index != NULL)
        {
            if (ptr->Data < index->Data)
            {
                temp = ptr->Data; //DATA
                ptr->Data = index->Data;
                index->Data = temp;
            }
            index = index->Next;
        }
        ptr = ptr->Next;
    }
}
int main()
{
    node *Head;
    Head = new node();
    Head->Data = 0;
    Head->Next = NULL;

    node *Current = new node;

    Current = Head;
    Current = Create_Node(Current, 1);
    Current = Create_Node(Current, 4);
    Current = Create_Node(Current, 3);

    Output(Head);
    sort(Head);
    Output(Head);
}
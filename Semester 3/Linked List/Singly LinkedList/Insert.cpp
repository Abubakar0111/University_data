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
    cout << endl;
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
node *Insert(node *Head, int val, int index)
{
    // node *Garbege_Node = new node();                 //for creating unknown list of item
    // node *new_Node = Create_Node(Garbege_Node, val); // they creating node
    node *new_Node = new node();
    new_Node->data = val;
    new_Node->next = NULL;

    if (index == 0)
    {
        new_Node->next = Head;
        Head = new_Node;
        return new_Node; //becouse they returning new node .. of head
        //so in main we will convert head into new node
    }
    node *temp = new node();
    node *prev = new node();
    temp = Head;
    int counter = 0;
    while (temp != NULL && counter < index)
    {
        prev = temp;
        temp = temp->next;
        counter += 1;
    }
    prev->next = new_Node;
    new_Node->next = temp;
    return Head; //they returnung head as it is to main
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
    Head = Insert(Head, 8, 3); //value - position

    Output(Head);
    Head = Insert(Head, 7, 7); //value - position
    Output(Head);

    // Output(Head);
}
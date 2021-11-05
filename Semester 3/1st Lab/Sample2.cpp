#include <iostream>

using namespace std;

struct Node // Simple Struct Node
{
    int Data;
    Node *Next; // Pointer Node
};

Node *Create_Node(Node *current, int val) // function that retun Node ..  and accepting Currnet and val
{
    Node *n = new Node; //creating Node ..
    n->Data = val;       //setting value which you gives from outside
    n->Next = NULL;     // setting to NULL
    current->Next = n;  // Setting a current Node to the next One
    return n;           // returning n ..
}
void Output_List(Node *Head)
{
    Node *Current = Head; // for outputting values from Head to max ..a
    while (Current != NULL)
    {
        cout << Current->Data << endl;
        Current = Current->Next;
    }
}
int Sum_Fun(Node *Head)
{
    int sum = 0;
    while (Head != NULL)
    {
        sum += Head->Data;
        Head = Head->Next;
    }
    return sum;
}
int Pro_Fun(Node *Head)
{
    int PRO = 1;
    while (Head != NULL)
    {
        PRO *= Head->Data;
        Head = Head->Next;
    }
    return PRO;
}
void Delete_after_node(Node *current)
{
    Node *temp = current->Next;
    current->Next = current->Next->Next;
    delete temp;
}
int main()
{

    Node *Head;        // craeting pointer node
    Head = new Node;   // giving address of a node to a pointer
    Head->Data = 1;     //init Head .. val value
    Head->Next = NULL; //set to new node NULL

    Node *current = Head; // equal to prevoius node

    current = Create_Node(current, 2); //calling to a function
    cout << "\ncurrent  " << current->Data << " is : " << current << endl;

    current = Create_Node(current, 3);
    cout << "current  " << current->Data << " is : " << current << endl;

    current = Create_Node(current, 4);
    cout << "current  " << current->Data << " is : " << current << endl;

    cout << "Head is : " << Head << endl;
    cout << "current is : " << current << endl;
    cout << "\n. . O U T P U T . . " << endl;

    Output_List(Head); // output Function

    current = Head->Next;
    cout << "We are going to delete : " << current->Data << endl; // Delete Function
    Delete_after_node(Head);

    Output_List(Head);

    cout << "The sum is : " << Sum_Fun(Head) << endl;
    cout << "The Product is : " << Pro_Fun(Head) << endl;
}

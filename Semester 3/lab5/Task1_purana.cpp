#include <iostream>

using namespace std;

struct node // Simple Struct Node
{
    int Id;
    string Name;
    int Data;

    node *Next; // Pointer Node
};

node *Create_Node(node *current, int Data, string Name) // function that retun Node ..  and accepting Currnet and val
{
    node *n = new node; //creating Node ..
    n->Name = Name;
    n->Data = Data;    //setting value which you gives from outside
    n->Next = NULL;    // setting to NULL
    current->Next = n; // Setting a current Node to the next One
    return n;          // returning n ..
}
void Fill_ID(node *Head)
{
    node *Current = Head; // for outputting values from Head to max ..a
    int i = 0;
    while (Current != NULL)
    {
        i++;
        Current->Id = i;
        Current = Current->Next;
    }
}

void Output_List(node *Head)
{
    cout << "\n. . O U T P U T . . " << endl;
    node *Current = Head; // for outputting values from Head to max ..a
    Fill_ID(Current);
    while (Current != NULL)
    {
        cout << endl
             << Current->Name << endl;
        cout << "Id : " << Current->Id << endl;

        cout << "Data : " << Current->Data << endl;
        Current = Current->Next;
    }
}

bool search(node *head, int x)
{
    node *current = head; // Initialize current
    while (current != NULL)
    {
        if (current->Data == x)
            return true;
        current = current->Next;
    }
    return false;
}

int FindMiddle(node *Head)
{
    int count = 0;
    node *current = Head;
    while (current != NULL)
    {
        count++;
        current = current->Next;
    }
    current = Head;
    int a = 0;

    while (a < count / 2)
    {
        a++;
        current = current->Next;
    }

    return current->Data;
}

void deleteNode(struct node *head_ref, int key)
{
    // Store head node
    struct node *temp = head_ref, *prev;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->Data == key)
    {
        head_ref = temp->Next; // Changed head
        delete temp;           // free old head memory
        return;
    }

    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->Data != key)
    {
        prev = temp;
        temp = temp->Next;
    }

    // If key was not present in linked list
    if (temp == NULL)
        cout << ":::: Item Not in List ::: \n";
    // Unlink the node from linked list
    prev->Next = temp->Next;
    delete (temp); // Free memory
}

void Delete_after_node(node *current, int x)
{

    node *temp = current->Next;
    current->Next = current->Next->Next;
    delete temp;
}
int main()
{

    node *Head;      // craeting pointer node
    Head = new node; // giving address of a node to a pointer
    Head->Id = 1;
    Head->Name = "Muhammad";
    Head->Data = 99;   //init Head .. val value
    Head->Next = NULL; //set to new node NULL

    int x = 3; //For searching

    node *current = Head; // equal to prevoius node

    // for (int i = 0; i < 10; i++)
    // {
    //     current = Create_Node(current, 2 + i); //calling to a function
    // }

    current = Create_Node(current, 97, "Abubakar"); //calling to a function
    // // cout << "\ncurrent  " << current->val << " is : " << current << endl;
    current = Create_Node(current, 83, "Umar");
    // // cout << "current  " << current->val << " is : " << current << endl;
    current = Create_Node(current, 81, "Usman");
    current = Create_Node(current, 77, "Ali");
    current = Create_Node(current, 68, "Zubair");
    current = Create_Node(current, 66, "Abdul Rehman");
    current = Create_Node(current, 54, "Muhammad");
    current = Create_Node(current, 50, "Zeeshan");
    current = Create_Node(current, 47, "Muavia");
    // // cout << "current  " << current->val << " is : " << current << endl;

    cout << "Head is : " << Head << endl;
    cout << "current is : " << current << endl;

    Output_List(Head); // output Function
    cout << "\nThe middle of this list is : " << FindMiddle(Head) << "\n";

    current = Head->Next;
    int DELETING = 50;
    cout << "\nWe are going to delete : " << DELETING << endl; // Delete Function
    // Delete_after_node(Head, 2);
    deleteNode(Head, DELETING);

    Output_List(Head);
    int SEARCHING = 54;
    if (search(Head, SEARCHING))
    {
        cout << "\nSearch -> Found : " << SEARCHING << endl;
    }
    else
    {
        cout << "\nSearch -> Not Found : " << SEARCHING << endl;
    }
    char chose;
    cout << "Do you want to add new list item Y/N : ";
    cin >> chose;
    if (chose == 'Y')
    {
        int DATA;
        string NAME;
        cout << "Enter Name of this player : ";
        cin >> NAME;
        cout << "Enter Data of this player : ";
        cin >> DATA;
        Create_Node(current, DATA, NAME);
    }
    Output_List(Head);
}

#include <iostream>

using namespace std;
struct node // Simple Struct Node
{
    int Id;
    string Name;
    int Data;

    node *Next; // Pointer Node
};
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
node *Create_Node(node *current, int Data, string Name) // function that retun Node ..  and accepting Currnet and val
{
    node *n = new node; //creating Node ..
    n->Name = Name;
    n->Data = Data;    //setting value which you gives from outside
    n->Next = NULL;    // setting to NULL
    current->Next = n; // Setting a current Node to the next One
    return n;          // returning n ..
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
node *Insert(node *Head, int val, int index, string name)
{
    // node *Garbege_Node = new node();                 //for creating unknown list of item
    // node *new_Node = Create_Node(Garbege_Node, val); // they creating node
    node *new_Node = new node();
    new_Node->Data = val;
    new_Node->Name = name;
    new_Node->Next = NULL;

    if (index == 0)
    {
        new_Node->Next = Head;
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
        temp = temp->Next;
        counter += 1;
    }
    prev->Next = new_Node;
    new_Node->Next = temp;
    return Head; //they returnung head as it is to main
}
void Descending_ORDER(node *head)
{
    struct node *ptr, *cpt;
    int temp;
    string sTemp;
    ptr = head;
    while (ptr->Next != NULL)
    {
        cpt = ptr->Next;
        while (cpt != NULL)
        {
            if (ptr->Data < cpt->Data)
            {
                temp = ptr->Data; //DATA
                ptr->Data = cpt->Data;
                cpt->Data = temp;

                sTemp = ptr->Name; //String
                ptr->Name = cpt->Name;
                cpt->Name = sTemp;
            }
            cpt = cpt->Next;
        }
        ptr = ptr->Next;
    }
}
void Ascending_ORDER(node *head)
{
    struct node *ptr, *cpt;
    int temp;
    string sTemp;
    ptr = head;
    while (ptr->Next != NULL)
    {
        cpt = ptr->Next;
        while (cpt != NULL)
        {
            if (ptr->Data > cpt->Data)
            {
                temp = ptr->Data; //DATA
                ptr->Data = cpt->Data;
                cpt->Data = temp;

                sTemp = ptr->Name; //String
                ptr->Name = cpt->Name;
                cpt->Name = sTemp;
            }
            cpt = cpt->Next;
        }
        ptr = ptr->Next;
    }
}
int min(node *head)
{
    int min = 0;
    node *current = new node();
    current = head;
    min = current->Data;

    while (current != NULL)
    {
        if (min > current->Data)
        {
            min = current->Data;
        }
        current = current->Next;
    }
    return min;
}
node *Remove_By_Value(node *head, int val)
{
    node *temp = new node();
    temp = head;
    if (temp != NULL)
    {
        if (temp->Data == val)
        {
            cout << "Deleting ->" << temp->Data << endl;
            head = temp->Next;
            temp = NULL;
            return head;
        }
    }
    node *prev = temp;
    while (temp != NULL)
    {
        if (temp->Data == val)
        {
            // cout << "Deleting ->" << temp->Data << endl;
            break;
        }
        prev = temp;
        temp = temp->Next;
    }

    if (temp == NULL)
    {
        cout << "\nNot Found" << endl;
        return head;
    }

    prev->Next = temp->Next;
    // cout << "END" << endl;

    return head;
}
node *Remove_By_Position(node *head, int val)
{
    node *temp = new node();
    temp = head;
    if (temp != NULL)
    {
        if (temp->Id == val)
        {
            cout << "Deleting ->" << temp->Id << endl;
            head = temp->Next;
            temp = NULL;
            return head;
        }
    }
    node *prev = temp;
    while (temp != NULL)
    {
        if (temp->Id == val)
        {
            // cout << "Deleting ->" << temp->Data << endl;
            break;
        }
        prev = temp;
        temp = temp->Next;
    }

    if (temp == NULL)
    {
        cout << "\nNot Found" << endl;
        return head;
    }

    prev->Next = temp->Next;
    // cout << "END" << endl;

    return head;
}
int Counter(node *Head)
{
    int count = 0;
    string name;
    node *current = new node();
    current = Head;

    while (Head != NULL)
    {
        count++;
        Head = Head->Next;
    }
    //finfing middle name
    int cnt = 0;
    while (current != NULL)
    {
        if (cnt >= count / 2)
        {
            name = current->Name;
            break;
        }
        current = current->Next;
        cnt++;
    }

    cout << "Middle player name is : " << name;
    return count;
}
int Middle(node *Head)
{
    int count = 0;
    while (Head != NULL)
    {
        count++;
        Head = Head->Next;
    }
    return (count / 2) + 1;
}
int pop(node *head)
{
    node *Head = head;
    if (Head == NULL)
    {
        cout << "GO BACKKKKK ";
    }
    if (Head->Next == NULL)
    {
        int data = Head->Data;
        Head = NULL;
        return data;
    }
    node *temp = head;
    node *pre;

    while (temp->Next != NULL)
    {
        pre = temp;
        temp = temp->Next;
    }
    int data = temp->Data;
    pre->Next = NULL;
    return data;
}
int main()
{

    node *Head;      // craeting pointer node
    Head = new node; // giving address of a node to a pointer
    Head->Id = 1;
    Head->Name = "Muhammad";
    Head->Data = 99;   //init Head .. val value
    Head->Next = NULL; //set to new node NULL

    node *current = Head;
    //1 Write a class that maintains the top 10 scorers’ ID, Name and Score for a game application.
    current = Create_Node(current, 97, "Abubakar");
    current = Create_Node(current, 83, "Umar");
    current = Create_Node(current, 81, "Usman");
    current = Create_Node(current, 77, "Ali");
    current = Create_Node(current, 68, "Zubair");
    current = Create_Node(current, 66, "Abdul Rehman");
    current = Create_Node(current, 54, "Muhammad");
    current = Create_Node(current, 50, "Zeeshan");
    current = Create_Node(current, 47, "Muavia");

    Output_List(Head); // output Function
    cout << "\n::::::: ::::::::: :::: 1 :::: ::::::::: ::::::: \n";

    //2 List must be sorted in Descending Order.
    Descending_ORDER(Head);
    Output_List(Head); // output Function

    //3 list will be searched for score less than 11 th score entry.
    cout << "\n:::::: Min : " << min(Head) << endl;

    //4 Find the middle element of a List in one pass.
    cout << " ::: " << Counter(Head) / 2 << endl;
    Output_List(Head); // output Function

    cout << "\n::::::: ::::::::: :::: 2 :::: ::::::::: ::::::: \n";

    //5 Remove the lowest score from List,to maintain only 10 highest scores.
    Head = Remove_By_Value(Head, min(Head));
    Output_List(Head); // output Function

    cout << "\n::::::: ::::::::: :::: 3 :::: ::::::::: ::::::: \n";

    //6 Remove index at position entered by user, number of scorers will reduce to 9.
    int enterBYuser = 5;
    Head = Remove_By_Position(Head, enterBYuser);
    Output_List(Head); // output Function

    cout << "\n::::::: ::::::::: :::: 4 :::: ::::::::: ::::::: \n";

    //7 Add newDataItem ahead of middle element
    Head = Insert(Head, 7, Middle(Head), "Zaryab"); //value - position
    Output_List(Head);                              // output Function

    Ascending_ORDER(Head);
    Output_List(Head); // output Function
}
#include <iostream>

using namespace std;
struct node
{
    int Id;
    string Name;
    int Data;
    node *next;
    node *prev;
};
node *create_node(node *current, int Data, string name)
{
    node *n = new node; //creating Node ..
    n->Name = name;
    n->Data = Data; //setting value which you gives from outside
    n->next = NULL; // setting to NULL
    n->prev = current;
    current->next = n; // Setting a current Node to the next One
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
        Current = Current->next;
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
        Current = Current->next;
    }
}
void print_address(node *head)
{
    node *current = head;
    while (current != NULL)
    {

        cout << "" << current->prev << "\t" << current << "\t" << current->next << endl;

        current = current->next;
    }
    cout << endl;
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
        current = current->next;
    }
    return min;
}

node *Insert(node *Head, int val, int index, string name)
{
    // node *Garbege_Node = new node();                 //for creating unknown list of item
    // node *new_Node = Create_Node(Garbege_Node, val); // they creating node
    node *new_Node = new node();
    new_Node->Data = val;
    new_Node->Name = name;
    new_Node->next = NULL;

    if (index == 0) //case 1 -a
    {
        new_Node->next = Head;

        if (Head != NULL) //case 1 -b    //Chnage(1) from singly
        {
            Head->prev = new_Node;
        }
        Head = new_Node;

        return new_Node; //becouse they returning new node .. of head
        //so in main we will convert head into new node
    }

    // Head = new_Node;
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
    new_Node->prev = prev; //change(2)

    new_Node->next = temp;
    if (temp != NULL) //change(3)
    {
        temp->prev = new_Node;
    }

    return Head; //they returnung head as it is to main
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
        Head = Head->next;
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
        current = current->next;
        cnt++;
    }

    cout << "Middle player name is : " << name << " position -> ";
    return count;
}
node *Remove(node *head, int val)
{
    node *temp = new node();
    temp = head;
    if (temp != NULL)
    {
        if (temp->Data == val)
        {

            cout << "1 Deleting ->" << temp->Data << endl;
            head = head->next;
            head->prev = NULL; //cahnge(2)
            temp = NULL;
            return head;
        }
    }
    node *prev = temp;
    while (temp != NULL)
    {
        if (temp->Data == val)
        {
            cout << "2 Deleting ->" << temp->Data << endl;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Not Found" << endl;
        return head;
    }

    prev->next = temp->next;
    if (temp->next != NULL) //change(3)
    {
        temp->next->prev = prev;
    }

    cout << "END" << endl;

    return head;
}
int pop(node *head)
{
    node *Head = head;
    if (Head == NULL) //is empty
    {
        cout << "GO BACKKKKK";
    }
    if (Head->next == NULL) //if there is only one node
    {
        int data = Head->Data;
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
    int data = temp->Data;
    pre->next = NULL;
    return data;
}
void Ascending_ORDER(node *head)
{
    struct node *ptr, *cpt;
    int temp;
    string sTemp;
    ptr = head;
    while (ptr->next != NULL)
    {
        cpt = ptr->next;
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
            cpt = cpt->next;
        }
        ptr = ptr->next;
    }
}
void Descending_ORDER(node *head)
{
    struct node *ptr, *cpt;
    int temp;
    string sTemp;
    ptr = head;
    while (ptr->next != NULL)
    {
        cpt = ptr->next;
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
            cpt = cpt->next;
        }
        ptr = ptr->next;
    }
}
int main()
{

    node *head = new node();
    head->Data = 54;
    head->Name = "Java";
    head->next = NULL;
    head->prev = NULL;
    node *current = new node();
    current = head;

    // 1 Write a class that maintains the top 10 scorers’ ID, Name and Score for a game application.
    current = create_node(current, 97, "Abubakar");
    current = create_node(current, 83, "Umar");
    current = create_node(current, 81, "Usman");
    current = create_node(current, 77, "Ali");
    current = create_node(current, 68, "Zubair");
    current = create_node(current, 66, "Abdul Rehman");
    current = create_node(current, 54, "Muhammad");
    current = create_node(current, 50, "Zeeshan");
    current = create_node(current, 47, "Muavia");

    Output_List(head);
    cout << "\n::::::: ::::::::: :::: 0 :::: ::::::::: ::::::: \n";

    cout << " : : : : : : Descending Order by data : : : : : : :" << endl;

    Descending_ORDER(head);
    Output_List(head);

    cout << "\n::::::: ::::::::: :::: 1 :::: ::::::::: ::::::: \n";
    // print_address(head);
    cout << "\n::: Min : " << min(head) << endl;
    cout << Counter(head) / 2 << " <- Mid : " << endl;

    cout << "\n::::::: ::::::::: :::: 2 :::: ::::::::: ::::::: \n";
    Insert(head, 90, 9, "Shahzad"); // VALUE - POSITION - STRING - inserting data in specific index
    Output_List(head);
    cout << "\n::::::: ::::::::: :::: 3 :::: ::::::::: ::::::: \n";
    cout << ":::::::pop  :" << pop(head) << endl;
    Output_List(head);

    //5 Remove the lowest score from List,to maintain only 10 highest scores.
    head = Remove(head, min(head));

    Output_List(head);
    cout << "\n::::::: ::::::::: :::: 4 :::: ::::::::: ::::::: \n";
    cout << " : : : : : : Ascending order by data : : : : : : :" << endl;

    Ascending_ORDER(head);
    Output_List(head);
}
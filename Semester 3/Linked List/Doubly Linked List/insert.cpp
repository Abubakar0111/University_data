#include <iostream>

using namespace std;
struct node
{
    int val;
    node *next;
    node *prev;
};
node *create_node(node *current, int val)
{
    node *new_node = new node();
    new_node->val = val;
    new_node->next = NULL;
    new_node->prev = current;
    current->next = new_node;

    return new_node;
}
void print_from_head(node *head)
{
    node *current = head;
    int counter = 0;
    while (current != NULL)
    {
        counter++;

        cout << "" << current->val << "\n";
        // if (counter > 1)
        // {
        //     cout << "P: " << current->prev->val << "\n";
        // }

        current = current->next;
    }
    cout << endl;
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
void print_from_Tail(node *tail)
{
    node *current = tail;
    while (current != NULL)
    {
        cout << current->val << "\n";
        current = current->prev;
    }
    cout << endl;
}
node *Insert(node *Head, int val, int index)
{
    // node *Garbege_Node = new node();                 //for creating unknown list of item
    // node *new_Node = Create_Node(Garbege_Node, val); // they creating node
    node *new_Node = new node();
    new_Node->val = val;
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
int main()
{

    node *head = new node();
    head->val = 0;
    head->next = NULL;
    head->prev = NULL;
    node *current = new node();
    current = head;
    current = create_node(current, 1);
    current = create_node(current, 2);
    current = create_node(current, 3);
    current = create_node(current, 4);

    current = create_node(current, 5);
    print_from_head(head);
    // print_from_Tail(current);
    head = Insert(head, 20, 7);
    head = Insert(head, 21, 6);
    print_from_head(head);
    print_address(head);
}
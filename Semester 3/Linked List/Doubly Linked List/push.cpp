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
    while (current != NULL)
    {
        cout << current->val << "\n";
        current = current->next;
    }
    cout << endl;
}
node *Push(node *Current, int data)
{
    node *Head = new node();

    node *New_node = create_node(Current, data); //TO CREATE NEW NODE
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
    New_node->prev = last; // change(1) from singly linked list
    return New_node;
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
    print_from_head(head);
    current = Push(current, 20);
    current = Push(current, 21);
    print_from_head(head);
    print_address(head);
    
}
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
    print_from_Tail(current);
}
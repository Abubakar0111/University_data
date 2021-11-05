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
    new_node->prev = current; // linking / setting - new node to current (previuos)
    current->next = new_node;

    return new_node;
}
void print(node *head)
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
    print(head);
    print_from_Tail(current);
    print_address(head);
}
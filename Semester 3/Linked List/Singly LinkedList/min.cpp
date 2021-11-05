#include <iostream>

using namespace std;
struct node
{
    int val;
    node *next;
};
node *create_node(node *current, int val)
{
    node *new_node = new node();
    new_node->val = val;
    new_node->next = NULL;
    current->next = new_node;
    return new_node;
}
void print(node *head)
{
    node *current = head;
    while (current != NULL)
    {
        cout << current->val << endl;
        current = current->next;
    }
}
int min(node *head)
{
    int min = 0;
    node *current = new node();
    current = head;
    min = current->val;

    while (current != NULL)
    {
        if (min < current->val)
        {
            min = current->val;
        }
        current = current->next;
    }
    return min;
}
int main()
{

    node *head = new node();
    head->val = 0;
    head->next = NULL;

    node *current = new node();
    current = head;
    current = create_node(current, 1);
    current = create_node(current, 2);
    current = create_node(current, 3);
    current = create_node(current, 4);
    current = create_node(current, 5);
    print(head);
    cout << "The Min is : " << min(head) << endl;
    print(head);
}
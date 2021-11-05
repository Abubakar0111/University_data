#include <iostream>

using namespace std;
struct node
{
    int val;
    node *next;
};
node *create_node(node *current, int val)
{
    node *new_Node = new node();
    new_Node->val = val;
    new_Node->next = NULL;
    current->next = new_Node;
    return new_Node;
}
void print(node *head)
{
    node *current = head;
    while (current != NULL)
    {
        cout << " : " << current->val << endl;
        current = current->next;
    }
    cout << endl;
}
node *Remove(node *head, int val)
{
    node *temp = new node();
    temp = head;
    if (temp != NULL)
    {
        if (temp->val == val)
        {
            cout << "Deleting ->" << temp->val << endl;
            head = temp->next;
            temp = NULL;
            return head;
        }
    }
    node *prev = temp;
    while (temp != NULL)
    {
        if (temp->val == val)
        {
            cout << "Deleting ->" << temp->val << endl;
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
    cout << "END" << endl;

    return head;
}
int main()
{

    node *head;
    head = new node();
    head->val = 0;
    head->next = NULL;

    node *current = new node();
    current = head;
    current = create_node(current, 1);
    current = create_node(current, 2);
    current = create_node(current, 2);
    current = create_node(current, 4);
    current = create_node(current, 5);

    print(head);
    head = Remove(head, 6);
    print(head);
}
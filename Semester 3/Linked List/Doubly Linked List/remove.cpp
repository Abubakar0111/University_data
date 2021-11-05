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
    current->next = new_node; //change(1)
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
}
node *Remove(node *head, int val)
{
    node *temp = new node();
    temp = head;
    if (temp != NULL)
    {
        if (temp->val == val)
        {

            cout << "1 Deleting ->" << temp->val << endl;
            head = head->next;
            head->prev = NULL; //cahnge(2)
            temp = NULL;
            return head;
        }
    }
    node *prev = temp;
    while (temp != NULL)
    {
        if (temp->val == val)
        {
            cout << "2 Deleting ->" << temp->val << endl;
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
    print_address(head);
    head = Remove(head, 3);
    print_address(head);
    print_from_head(head);
}
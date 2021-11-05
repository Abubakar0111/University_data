#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *front; // head/top

void push(int data)
{
    node *temp;
    temp = new node();
    temp->data = data; // setting data to it

    if (front == NULL) // add the node in front of list
    {
        temp->next = NULL;
    }
    else
    {
        temp->next = front;
    }
    front = temp;
}

void pop()
{
    if (front == NULL) // if empty

    {
        cout << "UNDERFLOW\n";
    }
    else
    {
        node *temp = front;
        front = front->next;
        delete (temp); // delete the first element
    }
}

void display()
{
    node *temp;

    // Check for stack underflow
    if (front == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = front;
        while (temp != NULL)
        {
            // Print node data
            cout << temp->data << "-> ";
            // Assign temp link to temp
            temp = temp->next;
        }
    }
}
int main()
{
    front = NULL; // setting front null ..

    push(20);
    push(30);
    push(40);
    push(50);
    cout << "\n:::: Push All Data :::: " << endl;

    display();
    cout << endl;
    cout << "\n:::: After Top Pop :::: " << endl;
    pop();
    display();
    cout << endl;
}
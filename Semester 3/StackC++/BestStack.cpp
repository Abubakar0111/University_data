#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class Stack
{
    node *front; // head/top
public:
    Stack()
    {
        front = NULL;
    }
    void push(int);
    void pop();
    int top();
    int isEmpty();
    void display();
    void clear_stack();
};

void Stack ::push(int data)
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
void Stack ::pop()
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
int Stack ::top()
{
    return front->data;
}
int Stack::isEmpty()
{
    return front == NULL;
}
void Stack::display()
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
void clear_stack()
{
    Stack *stack = new Stack;
    while (stack->isEmpty() != 1)

    {
        stack->pop();
    }
}
int main()
{
    Stack *stack;
    stack = new Stack;
    stack->push(20);
    stack->push(30);
    stack->push(40);
    stack->push(50);
    cout << ":::: All Data Push :::: " << endl;
    stack->display();
    cout << "\n:::: Top Pop :::: " << endl;
    // stack->pop();
    // stack->pop();
    // stack->pop();
    stack->display();
    if (stack->isEmpty() == 1)
    {
        cout << " : : : Stack is Empty : : : " << endl;
    }
    else
    {
        cout << " : : : Stack is Not Empty : : : " << endl;
    }
    clear_stack();
    stack->display();
}
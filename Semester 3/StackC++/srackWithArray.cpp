#include <iostream>

using namespace std;

struct Stack
{
    int size;
    int top;
    int *data;
};

int isEmpty(Stack *stack)
{
    if (stack->top < 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(Stack *stack)
{
    if (stack->top == stack->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(Stack *stack, int val)
{
    if (isFull(stack))
    {

        cout << "Stack overflow \n";
    }
    else
    {
        stack->top++;
        stack->data[stack->top] = val;
    }
}
int pop(Stack *stack)
{
    if (isEmpty(stack))
    {
        cout << "Stack is underflow\n";
        return -1;
    }
    else
    {
        int val = stack->data[stack->top];
        stack->top--;
        return val;
    }
    return 0;
}
void print(Stack *stack)
{
    for (int i = 0; i <= stack->top; i++)
    {
        cout << " " << stack->data[i] << endl;
    }
}
int main()
{
    Stack *stack;
    stack->top = -1;
    stack->size = 5;
    stack->data = (int *)malloc(stack->size * sizeof(int)); //for initilizing memory

    if (isEmpty(stack))
    {
        cout << "Stack is Empty\n";
    }
    else
    {
        cout << "Stack is Not Empty\n";
    }

    push(stack, 20);
    push(stack, 21);
    push(stack, 22);
    push(stack, 23);
    push(stack, 24);
    print(stack);

    cout << "Top count : " << stack->top << endl;
    cout << "Top value : " << stack->data[stack->top] << endl;

    if (isFull(stack))
    {
        cout << "Stack is full\n";
    }
    else
    {
        cout << "Stack is not full\n";
    }
    cout << "POP " << pop(stack) << endl;
    cout << "POP " << pop(stack) << endl;
    cout << "POP " << pop(stack) << endl;
    cout << "POP " << pop(stack) << endl;
    cout << "POP " << pop(stack) << endl;
}
#include <iostream>

using namespace std;
struct Node
{
    Node *next;
    int Data;
};
int main()
{
    Node *Head = new Node;

    Head->Data = 1;
    Head->next = new Node;

    Head->next->Data = 2;
    Head->next->next = new Node;

    Head->next->next->Data = 3;
    Head->next->next->next = new Node;

    Head->next->next->next->Data = 4;
    Head->next->next->next->next = new Node;

    cout << Head->Data << endl;
    cout << Head->next->Data << endl;
    cout << Head->next->next->Data << endl;
    cout << Head->next->next->next->Data << endl;

    cout << Head->next << endl;
    cout << Head->next->next << endl;
    cout << Head->next->next->next << endl;
    cout << Head->next->next->next->next << endl;
}

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
typedef struct node Node;

class LinkedList
{
private:
    Node *p, *q, *head, *tail;

public:
    LinkedList();
    void createAtStart(int);
    void createAtEnd(int);
    void traverse();

    ~LinkedList();
};

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
}

LinkedList::~LinkedList()
{
}

void LinkedList::createAtStart(int data)
{
    p = new Node;
    p->data = data;

    if (head == NULL || tail == NULL)
    {
        p->next = NULL;
        head = p;
        tail = p;
    }
    else
    {
        p->next = head;
        head = p;
    }
}

void LinkedList::createAtEnd(int data)
{
    p = new Node;
    p->data = data;

    if (head == NULL || tail == NULL)
    {
        p->next = NULL;
        head = p;
        tail = p;
    }
    else
    {
        p->next = NULL;
        tail->next = p;
    }
}

void LinkedList::traverse()
{
    if (head == NULL || tail == NULL)
    {
        cout << "empty" << endl;
    }
    else
    {
        q = head;
        while (q != NULL)
        {
            cout << q->data << " ";
            q = q->next;
        }
    }
}

int main()
{
    LinkedList list;

    list.createAtEnd(40);

    list.createAtStart(10);
    list.createAtStart(20);
    list.createAtStart(30);

    list.createAtEnd(50);

    list.traverse();

    return 0;
}
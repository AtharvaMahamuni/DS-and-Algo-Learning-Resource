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
    void deleteAtStart();
    void deleteAtEnd();
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

    if (head == NULL && tail == NULL)
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

void LinkedList::deleteAtStart()
{
    if (head == NULL && tail == NULL)
    {
        cout << "empty";
    }
    else
    {
        p = head;
        if (head->next == NULL && tail->next == NULL)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            head = head->next;
        }
        delete p;
    }
}

void LinkedList::deleteAtEnd()
{
    if (head == NULL && tail == NULL)
    {
        cout << "empty";
    }
    else
    {
        if (head->next == NULL && tail->next == NULL)
        {
            p = head;
            head = NULL;
            tail = NULL;
            delete p;
        }
        else
        {
            q = head;
            p = head->next;
            int i;
            while (p->next != NULL)
            {
                q = p;
                p = p->next;
            }
            tail = q;
            tail->next = NULL;
            delete p;
        }
        delete p;
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
    int i = 0;

    do
    {

        cout << "----------MENU-------------" << endl;
        cout << "1.create at start\n2.create at end\n4.delete at start\n5.delete at end\n7.traverese\n8.exit\n";
        cin >> i;

        switch (i)
        {
        case 1:
            list.createAtStart(10);
            break;
        case 2:
            list.createAtEnd(20);
            break;
        case 3:
            //list.createAtStart(10);
            break;
        case 4:
            list.deleteAtStart();
            break;
        case 5:
            list.deleteAtEnd();
            break;
        case 6:
            //list.createAtStart(10);
            break;
        case 7:
            list.traverse();
            break;
        case 8:
            break;

        default:
            break;
        }
    } while (i != 8);

    return 0;
}
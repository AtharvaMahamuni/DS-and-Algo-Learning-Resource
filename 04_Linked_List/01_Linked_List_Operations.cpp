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
    void createAtGivenLocation(int);
    void deleteAtStart();
    void deleteAtEnd();
    void deleteAtGivenLocation();
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

    if (head == NULL && tail == NULL)
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

void LinkedList::createAtGivenLocation(int data)
{
    int n;
    int i = 1;
    p = new Node;
    p->data = data;

    cout << "Enter the Location: ";
    cin >> n;

    if (head == NULL && tail == NULL && n == 1)
    {
        p->next = NULL;
        head = p;
        tail = p;
    }
    else if (n == 0)
    {
        cout << "Invalid Location" << endl;
    }
    else if (head != NULL)
    {
        q = head;
        if (n == 1)
        {
            p->next = head;
            head = p;
        }
        else
        {
            while (q != NULL && i < n - 1)
            {
                q = q->next;
                i++;
            }
            if (q == NULL)
            {
                cout << "Invalid location" << endl;
            }
            else
            {
                p->next = q->next;
                q->next = p;
                if (p->next == NULL)
                {
                    tail = p;
                }
            }
        }
    }
    else
    {
        cout << "Invalid location." << endl;
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

void LinkedList::deleteAtGivenLocation()
{
    if (head == NULL && tail == NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        printf("Enter location: ");
        int n = scanf("%d", &n);

        if (n == 1)
        {
            p = head;
            head = p->next;
            delete p;
        }
        else
        {
            int i = 1;
            q = head;
            p = head->next;

            while (i < n - 1)
            {
                q = p;
                p = p->next;
                i++;
            }

            q->next = p->next;
            delete p;
        }
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
        cout << endl;
    }
}

int main()
{
    LinkedList list;
    int i = 0;

    do
    {

        cout << "----------MENU-------------" << endl;
        cout << "1.create at start\n2.create at end\n3.Create at given location\n4.delete at start\n5.delete at end\n6.delete at given location\n7.traverese\n8.exit\n";
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
            list.createAtGivenLocation(30);
            break;
        case 4:
            list.deleteAtStart();
            break;
        case 5:
            list.deleteAtEnd();
            break;
        case 6:
            list.deleteAtGivenLocation();
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
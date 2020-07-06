#include <iostream>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;

class LinkedListOperations
{
};

int main()
{
    int i;
    do
    {
        cout << "Select the option from following:" << endl;
        cout << "1.Add at start\n2.Add at end\n3.Add at middle\n4.Remove at start\n5.Remove at end\n6.Remove from selected position" << endl;
        switch (i)
        {
        case 1:
            /* code */
            break;

        default:
            break;
        }

    } while (i != 7);

    return 0;
}
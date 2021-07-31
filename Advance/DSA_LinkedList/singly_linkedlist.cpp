#include <iostream>
using namespace std;

/* Define a single node 
    - At least one data section and a pointer for the next node
*/
struct node
{
    int data;
    node *next;
};

/* Class for handle the nodes
    - It should be have 2 important pointer: head and tail
*/
class list
{
private:
    node *head, *tail;

public:
    list()
    {
        head = NULL;
        tail = NULL;
    }
    void createNode(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    void display()
    {
        node *temp = new node;
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(void)
{
    cout << "Test singly linked list" << endl;

    list obj;
    obj.createNode(25);
    obj.createNode(50);
    obj.createNode(90);
    obj.createNode(40);
    cout<<"\n--------------------------------------------------\n";
	cout<<"---------------Displaying All nodes---------------";
	cout<<"\n--------------------------------------------------\n";
    obj.display();

    return 0;
}

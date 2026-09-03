#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *next;

    friend class LinkedList;

public:
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void add_first(int data)
    {
        Node *temp = new Node(data);

        temp->next = head;
        head = temp;
    }

    void add_last(int data)
    {
        Node *temp = new Node(data);

        if(head == NULL)
        {
            head = temp;
            return;
        }

        Node *p = head;

        while(p->next != NULL)
            p = p->next;

        p->next = temp;
    }

    void display()
    {
        Node *p = head;

        while(p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }

        cout << endl;
    }

    ~LinkedList()
    {
        Node *p;

        while(head != NULL)
        {
            p = head;
            head = head->next;
            delete p;
        }
    }
};

int main()
{
    LinkedList l;

    l.add_first(30);
    l.add_first(20);
    l.add_first(10);

    l.add_last(40);
    l.add_last(50);

    l.display();

    return 0;
}

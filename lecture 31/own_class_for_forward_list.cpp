#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class forward_list
{
    node *head;
    int count;

public:
    forward_list()
    {
        head = NULL;
        count = 0;
    }

    void push_front(int data)
    {
        node *n = new node(data);
        n->next = head;
        head = n;

        count++;
    }

    void pop_front()
    {
        if (head == NULL)
        {
            return;
        }
        node *temp = head->next;
        delete head;
        head = temp;

        count--;
    }

    int size()
    {
        return count;
    }

    bool empty()
    {
        return head == NULL; // or count == 0
    }

    int front()
    {
        return head->data;
    }

    void traverse()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    forward_list fw;
    fw.push_front(50);
    fw.push_front(40);
    fw.push_front(30);
    fw.push_front(20);
    fw.push_front(10);

    cout << "Head is : " << fw.front() << endl;

    fw.traverse();

    cout << "size is : " << fw.size() << endl;

    fw.pop_front();
    fw.pop_front();

    fw.traverse();

    fw.pop_front();
    fw.pop_front();
    fw.pop_front();

    fw.empty() ? cout << "List is Empty" << endl : cout << "List is not-empty" << endl;
}
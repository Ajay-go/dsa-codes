#include <iostream>
using namespace std;

class Node
{
private:
    int val;
    Node *next;

public:
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }

    static Node *addnode(Node *head, int val)
    {
        Node *nnode = new Node(val);
        if (!head)
            return nnode;

        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }

        temp->next = nnode;
        cout << "Node ADDED" << endl;
        return head;
    }

    static void display(Node *head)
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Node *head = NULL;
    head = Node::addnode(head, 20);
    head = Node::addnode(head, 30);
    head = Node::addnode(head, 40);
    head = Node::addnode(head, 50);
    head = Node::addnode(head, 60);

    Node::display(head);
}

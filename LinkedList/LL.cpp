#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int data)
    {
        this->value = data;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void traverse(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
}
void reverse(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *current = head;
    Node *nextRef = NULL;
    Node *prev = NULL;
    while (current != nullptr)
    {
        // next k reference ho taa k traverse kr skein end tk
        nextRef = current->next;
        // previous waly ko apna next set krlo
        current->next = prev;
        // ab refernce hai ab prev ko agy brhao taa k agly previous k refernce bhi ho
        prev = current;
        current = nextRef;
    }
    head = prev;
}
void deleteFromSorted(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        if (temp->next->value == temp->value)
        {
            Node *temp2 = temp->next;
            temp->next = temp2->next;
            delete temp2;
        }
        else
        {
            temp = temp->next;
        }
    }
}
// without access to main and its not last node
void deleteNode(int value, Node *&head)
{
    if (head != nullptr && head->value == value)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *current = head->next;
    Node *prev = head;
    while (current != nullptr)
    {
        if (current->value != value)
        {
            prev = current;
            current = current->next;
        }
        else
        {
            prev->next = current->next;
            delete current;
            return; // Otherwise, it tries to use current again in the next iteration — which is now dangling.
        }
    }
}
Node *mergeTwoSorted(Node *&head1, Node *&head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *newList = new Node(-1);
    Node *tracknew = newList; // header node of new list
    while (temp1 != nullptr && temp2 != nullptr)
    {
        if (temp1->value > temp2->value)
        {
            tracknew->next = temp1;
            temp1 = temp1->next;
        }
        else
        {
            tracknew->next = temp2;
            temp2 = temp2->next;
        }
        tracknew = tracknew->next;
    }
    while (temp1 != nullptr)
    {
        tracknew->next = temp1;
        temp1 = temp1->next;
    }
    while (temp2 != nullptr)
    {
        tracknew->next = temp2;
        temp2 = temp2->next;
    }
    return newList->next;
}
void removeLoop(Node *&head)
{

    // If list is empty or has only one node without loop
    if (head == nullptr || head->next == nullptr)
        return;

    Node *slow = head, *fast = head;

    // Move slow and fast 1 and 2 steps ahead respectively.
    slow = slow->next;
    fast = fast->next->next;

    // Search for loop using slow and fast pointers
    while (fast && fast->next)
    {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }

    // If loop exists
    if (slow == fast)
    {
        // Fix: Move slow to head AFTER checking special case
        if (slow == head)
        {
            // Loop starts at head
            while (fast->next != slow)
                fast = fast->next;
            fast->next = nullptr;
        }
        else
        {
            slow = head;
            while (slow->next != fast->next)
            {
                slow = slow->next;
                fast = fast->next;
            }
            fast->next = nullptr;
        }
    }
}


int main()
{
    // Node *first = new Node(10);
    // Node *head = first;
    // Node *tail = first;
    // insertAtHead(head, 20);
    // insertAtHead(head, 30);
    // insertAtHead(head, 30);
    // insertAtHead(head, 40);
    // traverse(head);
    // deleteNode(30, head);
    // cout << endl;
    // traverse(head);
    // cout << endl;
    // reverse(head);
    // traverse(head);
    //  40  -> 30 -> 20 -> 10 - = // 30
    //         |------------|
    // head->next->next = head->next;
    // traverse(head);
    // removeLoop(head);
    // cout << endl;
    cout << endl;
    // deleteFromSorted(head);

    Node *first = new Node(1);
    Node *head = first;
    Node *tail = first;
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    Node *second = new Node(1);
    Node *head2 = second;
    insertAtHead(head2, 3);
    insertAtHead(head2, 4);
    Node *latest = mergeTwoSorted(head, head2);
    traverse(latest);
    return 0;
}
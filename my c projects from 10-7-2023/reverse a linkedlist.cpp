#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
};

void input(node*& head, int data) {
    node* newnode = new node;
    newnode->data = data;
    newnode->next = nullptr;

    if (head == nullptr) {
        head = newnode;
    }
    else {
        node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newnode;
    }
}

void print(node* n) {
    while (n != nullptr) {
        cout << n->data << "->";
        n = n->next;
    }
    cout << "null" << endl;
}

node* reverse(node* head) {
    node* current = head;
    node* next = nullptr;
    node* prev = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

int main() {
    node* head = nullptr;
    input(head, 1);
    input(head, 2);
    input(head, 3);
    input(head, 4);
    input(head, 5);

    cout << "Original Linked List:" << endl;
    print(head);

    head = reverse(head);

    cout << "Reversed Linked List:" << endl;
    print(head);

    return 0;
    }

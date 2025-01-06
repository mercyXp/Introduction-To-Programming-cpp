#include <iostream>
 
using namespace std;

struct Node {
    int value;
    Node* next;

    Node(int val) {
        value = val;
        next = NULL;
    }
};

void traverse(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtEnd(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;  
    tail = newNode;         
}

int main() {
    int NUM;
    Node* head = NULL;
    Node* tail = NULL;

    while (cin >> NUM) {
        insertAtEnd(head, tail, NUM);
    }

    traverse(head);

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

struct Node {
    int value;
    Node* next;

    Node(int val) {
        value = val;
        next = nullptr;
    }
};

void traverse(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtEnd(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAtPosition(Node*& head, int x, int k) {
    Node* newNode = new Node(x);
    if (k == 1) {  // Insert at the head
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    int count = 1;

    while (temp != nullptr && count < k - 1) {
        temp = temp->next;
        count++;
    }

    /*if (temp == nullptr) {
        cout << "Invalid position" << endl;
        return;
    }*/

    newNode->next = temp->next;
    temp->next = newNode;
}

int stringToInt(const string& str) {
    int num = 0;
    for (char c : str) {
        num = num * 10 + (c - '0');
    }
    return num;
}

int main() {
    string line;
    getline(cin, line);  // Read the entire input line

    Node* head = nullptr;
    Node* tail = nullptr;

    string currentNum = "";
    int numbers[100];  // Array to store numbers (assuming input size is less than 100)
    int count = 0;

    // Parse the input manually
    for (char c : line) {
        if (c >= '0' && c <= '9') {  // Check if the character is a digit
            currentNum += c;
        } else if (c == ' ' && !currentNum.empty()) {  // End of a number
            numbers[count++] = stringToInt(currentNum);
            currentNum = "";
        }
    }

    // Handle the last number
    if (!currentNum.empty()) {
        numbers[count++] = stringToInt(currentNum);
    }

    // The last two numbers are x and k
    int x = numbers[count - 2];
    int k = numbers[count - 1];

    // Insert the sequence into the linked list
    for (int i = 0; i < count - 2; i++) {
        insertAtEnd(head, tail, numbers[i]);
    }

    // Insert x at the k-th position
    insertAtPosition(head, x, k);

    // Print the updated list
    traverse(head);

    return 0;
}

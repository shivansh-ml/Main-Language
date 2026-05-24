// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
// };

// Node* head = NULL;

// void insert(int x) {

//     Node* temp = new Node();

//     temp->data = x;
//     temp->next = NULL;

//     if (head == NULL) {
//         head = temp;
//         return;
//     }

//     Node* temp1 = head;

//     while (temp1->next != NULL) {
//         temp1 = temp1->next;
//     }

//     temp1->next = temp;
// }

// void reverse() {

//     Node* prev = NULL;
//     Node* current = head;
//     Node* next = NULL;

//     while (current != NULL) {

//         next = current->next;

//         current->next = prev;

//         prev = current;

//         current = next;
//     }

//     head = prev;
// }

// void print() {

//     Node* temp = head;

//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     cout << endl;
// }

// int main() {

//     insert(1);
//     insert(2);
//     insert(3);
//     insert(4);

//     print();

//     reverse();

//     print();

//     return 0;
// }

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int x) {

    Node* temp = new Node();

    temp->data = x;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        return;
    }

    Node* temp1 = head;

    while (temp1->next != NULL) {
        temp1 = temp1->next;
    }

    temp1->next = temp;
}

void printForward(Node* p) {

    if (p == NULL)
        return;

    cout << p->data << " ";

    printForward(p->next);
}

void printReverse(Node* p) {

    if (p == NULL)
        return;

    printReverse(p->next);

    cout << p->data << " ";
}

int main() {

    insert(1);
    insert(2);
    insert(3);
    insert(4);

    cout << "Forward Order: ";
    printForward(head);

    cout << endl;

    cout << "Reverse Order: ";
    printReverse(head);

    return 0;
}


// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
// };

// Node* head = NULL;

// void insert(int data, int position) {

//     Node* temp1 = new Node();
//     temp1->data = data;
//     temp1->next = NULL;

//     if (position == 1) {
//         temp1->next = head;
//         head = temp1;
//         return;
//     }

//     Node* temp2 = head;

//     for (int i = 0; i < position - 2; i++) {
//         temp2 = temp2->next;
//     }

//     temp1->next = temp2->next;
//     temp2->next = temp1;
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

//     insert(2,1);
//     insert(3,2);
//     insert(4,3);
//     insert(5,4);

//     print();

//     insert(10,3);

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

void deleteNode(int position) {

    if (head == NULL)
        return;

    Node* temp1 = head;

    if (position == 1) {
        head = temp1->next;
        delete temp1;
        return;
    }

    for (int i = 0; i < position - 2; i++) {
        temp1 = temp1->next;
    }

    Node* temp2 = temp1->next;

    temp1->next = temp2->next;

    delete temp2;
}

void print() {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    insert(2);
    insert(4);
    insert(6);
    insert(5);

    print();

    deleteNode(2);

    print();

    return 0;
}
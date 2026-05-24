#include <iostream>
#include <vector>
using namespace std;

class ArrayADT {
    vector<int> arr;

public:

    void insert() {
        int value, pos;

        cout << "Enter value: ";
        cin >> value;

        cout << "Enter position: ";
        cin >> pos;

        if (pos < 0 || pos > arr.size()) {
            cout << "Invalid Position\n";
            return;
        }

        arr.insert(arr.begin() + pos, value);

        cout << "Element Inserted\n";
    }

    void deleteElement() {
        int pos;

        if (arr.empty()) {
            cout << "Array is Empty\n";
            return;
        }

        cout << "Enter position to delete: ";
        cin >> pos;

        if (pos < 0 || pos >= arr.size()) {
            cout << "Invalid Position\n";
            return;
        }

        arr.erase(arr.begin() + pos);

        cout << "Element Deleted\n";
    }

    void search() {
        int key;
        bool found = false;

        cout << "Enter element to search: ";
        cin >> key;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == key) {
                cout << "Element found at position " << i << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Element not found\n";
        }
    }

    void update() {
        int pos, value;

        if (arr.empty()) {
            cout << "Array is Empty\n";
            return;
        }

        cout << "Enter position to update: ";
        cin >> pos;

        if (pos < 0 || pos >= arr.size()) {
            cout << "Invalid Position\n";
            return;
        }

        cout << "Enter new value: ";
        cin >> value;

        arr[pos] = value;

        cout << "Element Updated\n";
    }

    void display() {
        if (arr.empty()) {
            cout << "Array is Empty\n";
            return;
        }

        cout << "Array Elements: ";

        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {

    ArrayADT obj;
    int choice;

    do {
        cout << "\n----- ARRAY ADT USING VECTOR -----\n";

        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Update\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                obj.insert();
                break;

            case 2:
                obj.deleteElement();
                break;

            case 3:
                obj.search();
                break;

            case 4:
                obj.update();
                break;

            case 5:
                obj.display();
                break;

            case 6:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while (choice != 6);

    return 0;
}
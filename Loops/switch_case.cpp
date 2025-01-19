#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your choice\n";
    char ch;
    cin >> ch;
    switch (ch)
    {
    case 'A':
        cout << "Your choice is A\n";
        break;
    case 'B':
    case 'b': // Correctly handling both 'B' and 'b'
        cout << "Your choice is B\n";
        break;
    default:
        cout << "Invalid choice\n";
        break;
    }
    return 0; // Optional but good practice
}
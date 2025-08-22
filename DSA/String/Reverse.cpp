// #include <iostream>
// #include <cstring>
// using namespace std;

// int main() {
//     char s[] = "Programming";
//     int i = 0, j = strlen(s) - 1;

//     while (i < j) {
//         char temp = s[i];
//         s[i] = s[j];
//         s[j] = temp;
//         i++; j--;
//     }

//     cout << "Reversed: " << s << endl;
//     return 0;
// }
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[] = "madam";
    char s2[] = "madam";

    // Compare strings
    if (strcmp(s1, s2) == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    // Check palindrome
    int i = 0, j = strlen(s1)-1;
    bool isPal = true;
    while (i < j) {
        if (s1[i] != s1[j]) { isPal = false; break; }
        i++; j--;
    }

    if (isPal) cout << s1 << " is Palindrome" << endl;
    else cout << s1 << " is not Palindrome" << endl;

    return 0;
}

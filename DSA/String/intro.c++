// #include <iostream>
// using namespace std;

// int main() {
//     // C style string
//     char s1[] = "Hello";   // array of chars ending with '\0'
//     cout << "C string: " << s1 << endl;

//     // C++ style string
//     string s2 = "World";
//     cout << "C++ string: " << s2 << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    char s[] = "HelloWorld";
    int i = 0;
    while (s[i] != '\0') i++;   // count until null character

    cout << "Length = " << i << endl;
    return 0;
}


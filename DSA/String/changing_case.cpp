#include <iostream>
using namespace std;

int main() {
    char s[] = "HeLLoWoRLD";

    // Convert to lowercase
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    cout << "Lowercase: " << s << endl;

    // Convert to uppercase
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
    cout << "Uppercase: " << s << endl;

    return 0;
}

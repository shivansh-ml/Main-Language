#include <iostream>
using namespace std;

int main() {
    char s[] = "abc123";
    bool valid = true;

    for (int i = 0; s[i] != '\0'; i++) {
        if (!(s[i]>='a' && s[i]<='z') &&
            !(s[i]>='A' && s[i]<='Z') &&
            !(s[i]>='0' && s[i]<='9')) {
            valid = false;
            break;
        }
    }

    if (valid) cout << "Valid String" << endl;
    else cout << "Invalid String" << endl;
    return 0;
}

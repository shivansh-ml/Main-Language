#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    // Write your code here
    if(n==1)
    {
        cout<<"one\n";
    }
    else if(n==2)
    {
        cout<<"two\n";
    }
    else if(n==3)
    {
        cout<<"three\n";
    }
    else if(n==4)
    {
        cout<<"four\n";
    }
    else if(n==5)
    {
        cout<<"five\n";
    }
    else if(n==6)
    {
        cout<<"six\n";
    }
    else if(n==7)
    {
        cout<<"seven\n";
    }
    else if(n==8)
    {
        cout<<"eight\n";
    }
    else if(n==9)
    {
        cout<<"nine\n";
    }
    else
    {
        cout<<"Greater than 9\n";
    }
    return 0;
}

// string ltrim(const string &str) {
//     string s(str);//A new copy of the string str is created and named s. This copy will be modified to remove spaces while keeping the original string intact.
//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }
string ltrim(const string &str) {
    string s(str);
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char c) { return !isspace(c); }));
    return s;
}

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }
string rtrim(const string &str) {
    string s(str);
    s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char c) { return !isspace(c); }).base(), s.end());
    return s;
}
/*
[](unsigned char c) { return !isspace(c); }:
[]: Declares a lambda function.
(unsigned char c): Specifies the input type.
{ return !isspace(c); }: Inverts the logic of isspace.*/
/*
isspace is a C++ function that checks if a character is whitespace (like a space, tab, or newline).
ptr_fun is a weird, old-school wrapper that turns isspace into something you can pass to algorithms like find_if.
*/
/*
not1 is another old-school utility that wraps a function to make it do the opposite of what it normally does.
In this case, not1(ptr_fun<int, int>(isspace)) creates a function that finds the first character that is NOT whitespace
*/
/*
s.begin(): Points to the start of the string.
s.end(): Points just past the end of the string.
find_if(s.begin(), s.end(), ...): Finds the first non-whitespace character.
s.erase(start, end): Removes all characters in the range [start, end).
In this case:

It erases everything from the beginning of the string up to the first non-whitespace character.
*/
/*
This does the same thing as ltrim, but in reverse:

s.rbegin(): Points to the last character of the string (reverse iterator).
s.rend(): Points just before the start of the string (reverse iterator).
find_if(s.rbegin(), s.rend(), ...): Finds the first non-whitespace character when going backward.
.base(): Converts the reverse iterator into a forward iterator.
s.erase(start, end): Removes everything from the first trailing whitespace to the end of the string.
*/
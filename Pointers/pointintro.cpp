#include <iostream>

using namespace std;

int main()
{
    string name = "Shivansh Jha";
    string *pname = &name;
    int age = 21;
    int *page = &age;
    string FreePizzas[5]={"Lapalap", "SJ", "SJSJ", "SJJ", "SSJ"};
    string *pfree = FreePizzas;
    cout << pname << endl;
    cout << page << endl;
    cout << FreePizzas << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << FreePizzas[i] << endl;
    }
    cout<<pfree<<endl;
}
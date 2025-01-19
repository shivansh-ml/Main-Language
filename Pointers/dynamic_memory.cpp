#include <iostream>

using namespace std;

int main()
{
    int *pNum = NULL;
    pNum = new int;
    *pNum = 10;
    char *pGrades = NULL;
    pGrades = new char[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter Grade Number"<<i+1<<": ";
        cin>>pGrades[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<pGrades[i]<<"\n";
    }
    cout<<"Address: "<<pNum<<endl;
    cout<<"Address: "<<*pNum<<endl;
    delete pNum;
    delete pGrades;
}
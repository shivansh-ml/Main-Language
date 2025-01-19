#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    cout<<"Enter your First inclusive interval :";
    cin>>a;
    cout<<"Enter your Second inclusive interval :";
    cin>>b;
    for(int i=a;i<=b;i++)
    {
        if(i==1)
        {
        cout<<"one\n";
        }
        else if(i==2)
        {
        cout<<"two\n";
        }
        else if(i==3)
        {
        cout<<"three\n";
        }
        else if(i==4)
        {
        cout<<"four\n";
        }
        else if(i==5)
        {
        cout<<"five\n";
        }
        else if(i==6)
        {
        cout<<"six\n";
        }
        else if(i==7)
        {
        cout<<"seven\n";
        }
        else if(i==8)
        {
        cout<<"eight\n";
        }
        else if(i==9)
        {
        cout<<"nine\n";
        }
        else
        {
        if(i%2==0){
            cout<<"even\n";
        }
        else{
            cout<<"odd\n";
        }
        }
    }
    return 0;
}
/*
Vector - similar like array however unlike array it can change its size at runtime (it is dynamic)
vector<int> vec;
vector<int> vec={1,2};
vector<int> vec(3,10);
vector<int> vec2(vec1);
*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec;//initial size is 0
    cout<<vec.size()<<endl;
    vec.push_back(1);
}

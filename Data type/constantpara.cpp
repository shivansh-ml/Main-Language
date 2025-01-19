/*
Const parameter-parameter that is effectively read-only code
                more secure & conveys inten useful for references and pointers
*/
#include <iostream>
void printInfo(const std::string name, const int age){
    std::cout<<"Your details are\n";
    std::cout<<name<<'\n';
    std::cout<<age<<std::endl;
}
int main()
{
    std::string name = "Sj";
    int age = 21;
    printInfo(name ,age);
}
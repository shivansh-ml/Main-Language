//fill()=fills a range of elements with a specified value
#include <iostream>
//fill(begin ,end , value)
int main()
{
    std::string foods[10];
    fill(foods,foods +10,"pizza");
    for(std::string food:foods)
    {
        std::cout<<food<<'\n';
    }
}
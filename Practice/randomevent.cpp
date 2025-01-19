#include <iostream>
#include <ctime> // Include for time function
#include <cstdlib> // Include for srand and rand
int main()
{
    //pseudo random=Not truly random(but close)
    srand(time(NULL));
    //generate random number between 1 and 6
    int num = (rand()%6)+1;
    //The rand() function generates a pseudo-random number between 0 and RAND_MAX, which is typically 32767.
    std::cout<<num;
}
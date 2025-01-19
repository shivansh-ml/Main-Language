// #include <iostream>
// using namespace std;
// struct card{
//     int face;
//     int shape;
//     int color;
// };
// int main(){
//     struct card deck[52]={(7,0,8),(2,0,0)};
//     cout<<deck[0].face<<endl;
//     cout<<deck[0].shape<<endl;
//     cout<<deck[0].color<<endl;
// }
#include <iostream>

// Define the card struct
struct Card {
    int face;
    int shape;
    int color;
};

int main() {
    // Initialize the deck array with 52 cards
    Card deck[52] = {{7, 0, 8}, {2, 0, 0}};

    // Print the first card's values
    std::cout << deck[0].face << std::endl;
    std::cout << deck[0].shape << std::endl;
    std::cout << deck[0].color << std::endl;

    return 0;
}
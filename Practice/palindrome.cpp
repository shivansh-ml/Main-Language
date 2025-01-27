#include <iostream>
#include <climits>
class Solution {
public:
   bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int rev=0;
        int c=x;
        while(c!=0){
            if (rev > (INT_MAX / 10) || (rev == INT_MAX / 10 && c % 10 > 7)) {
                return false; 
            }
            rev = 10*rev+ c%10;
            c=c/10;
        }
        // std::cout<<rev<<std::endl;
        return rev==x;
   }
};

int main(){
    Solution s;
    s.isPalindrome(121); 
    return 0;
}

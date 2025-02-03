#include <iostream>
int sum(int n){
    if (n == 0) return 0;
    else return n + sum(n-1);
}
int Isum(int n){
    int s=0;
    int i;
    for(i=1;i<=n;i++)
    s=s+i;
    return s;
}
int main(){
    std::cout << sum(5) << std::endl;
    std::cout << Isum(5) << std::endl;

}
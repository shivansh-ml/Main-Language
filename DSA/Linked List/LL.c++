#include <bits/stdc++.h>
int main(){

}

/*
Array - the cost of accessing an element is constant time since if we know the base address and the number of element we want to access we can do it in constant time
Linked List - in O(N)
Array - fixed size, array created as a contiguous block of memory if we want to make a really large array memory may not be availabe as one large block
Linked List - No unused memory, extra memory for pointer variable(4 bytes), if we want to make a big LL it is possible since we will be adding memory as multiple small block
Array - static
Linked List - Dynamic

Insertion operation or Deletion operation:
a) At beginning - Arrray-->O(n), Linked List-->O(1)
b) At end - Array-->O(1), Linked List-->O(n)
c) At ith position - Array-->O(n), Linked List-->O(n)

Array is easier to use unlike Linked List(segmentation fault, memory leak)
*/
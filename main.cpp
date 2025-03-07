#include <iostream>
#include "BitArray.chh"




int main() {
    BitArray arr(2, 2147483647);
    std::cout<<arr[-1].read()<<"\n";
}
// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 
#include <vector>
#include <iostream>
#include <string>

int main(){
    std ::vector<int> aharoni = {0, 1, 2, 2};
    aharoni.push_back(3);
    aharoni.pop_back();

    //std::cout << "The Aharoni's parents family are: " << aharoni[4] <<" and " << aharoni[5] << std::endl;
    //std::cout << "In aharoni family there are " << aharoni.size() << " people." <<std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}

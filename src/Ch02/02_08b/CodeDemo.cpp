// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script};
enum class asset_type2 {texture2, sound, animation2, script2};
int main(){
    asset_type2 asset_value;

    asset_value = asset_type2::script2;

    std::cout << "asset_value = " << (int)asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}

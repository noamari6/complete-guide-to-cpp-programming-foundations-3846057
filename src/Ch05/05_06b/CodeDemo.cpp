// Complete Guide to C++ Programming Foundations
// Exercise 05_06
// Traditional For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> lapTimes = {92, 85, 88, 90, 87};
    float average = 0;
    for(auto x : lapTimes)
        average += x;
    average /= lapTimes.size();

    std::cout << "The average lap time is: " << average << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}

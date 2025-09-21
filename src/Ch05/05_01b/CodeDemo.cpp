// Complete Guide to C++ Programming Foundations
// Exercise 05_01
// If Statements, by Eduardo Corpeño 

#include <iostream>
#include<string>
int main(){
int choice;
std::cout << "Enter a difficulte you want (a num between 1 and 3): " << choice << std::endl;;
std::cin >> choice;
std::string difficulty = (choice ==1) ? "Easy" : (choice == 2) ? "Medium" : "Hard";
std::cout << "Difficulty Level: " << difficulty << std::endl;
    return 0;
}

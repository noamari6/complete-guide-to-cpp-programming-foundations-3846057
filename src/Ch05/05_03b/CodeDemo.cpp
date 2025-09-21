// Complete Guide to C++ Programming Foundations
// Exercise 05_03
// Switch Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    float op1, op2, result;
    char operation;

    std::cout << "Enter operand 1: " << std::flush;
    std::cin >> op1;
    std::cout << "Enter operand 2: " << std::flush;
    std::cin >> op2;
    std::cout << "Choose operation [ + - * / ]: " << std::flush;
    std::cin >> operation;

    switch (operation) {
        case '+':
            result = op1 + op2;
            break;
        case '-':
            result = op1-op2;
            break;
        case '*':
            result = op1*op2;
            break;
        case '/':
            result = op1/op2;
            break;
    }
    std::cout << "The result is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}

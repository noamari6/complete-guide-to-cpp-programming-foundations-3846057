// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>

int main(){
    std::vector<std::complex<double>> viewers;
    viewers.push_back(std::complex<double>(3.2, 4.2));
    viewers.push_back(std::complex<double>(2.3, 9.2));
    viewers.push_back(std::complex<double>(5.2, 1.2));
    viewers.push_back(std::complex<double>(7.2, 3.2));
    std::cout << "The first real part: " << viewers.begin()->real() <<std::endl;
    std::cout << "Imaginary part at index 1: " << viewers[1].imag() <<std::endl;
    std::cout << "Next to last real: " << prev(viewers.end(), 2)->real() <<std::endl;
    std::cout << "Last imaginary: " << (viewers.end() -1)->imag() <<std::endl;




    std::cout << std::endl << std::endl;
    return 0;
}

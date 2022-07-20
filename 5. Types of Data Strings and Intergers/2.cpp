#include <iostream>

int main(){
int num1, num2;

std::cout << "Please add a number here" << std::endl;
std::cin >> num1;

std::cout << "Please add another number here" << std::endl;
std::cin >> num2;

std::cout << num1 + num2 << " , " << num1 * num2 << " , " << num1 / num2 << std::endl;

    return 0;
}
#include <iostream>

int main(){

std::string think1;
std::string think2;

std::cout << "Please add a randomn world" << std::endl;
getline(std::cin, think1);

think2 = think1;

std::cout << think1 << think2 << std::endl;

    return 0;
}
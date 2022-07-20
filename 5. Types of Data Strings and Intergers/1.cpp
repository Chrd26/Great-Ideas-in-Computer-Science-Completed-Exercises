#include <iostream>

int main(){

int number;

std::cout << "Please, add a random number here" << std::endl;
std::cin >> number;

if(number > 0){

    std::cout << "The number is bigger than 0" << std::endl;
} else if (number < 0)
{
    std::cout << "The number is smaller than 0" << std::endl;
}else {

std::cout << "The number is equal to 0" << std::endl;

}

    return 0;
}
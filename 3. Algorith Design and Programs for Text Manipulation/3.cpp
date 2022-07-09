#include <iostream>

int main(){

std::string street, number, message1, message2;
char space = ' ';

std::cout << "Please write the name of the street you live in. " << std::endl;
getline(std::cin, street);
message1 = "This is the street where you live in : ";
std::cout << message1 << " " << street << std::endl;
std::cout << "Please write the number of your house." << std::endl;
getline(std::cin, number);
message2 = "This is the number of the street you live in : ";
std::cout << message2 << number << std::endl;

std::cout << message1 + street + space + message2 + number << std::endl;

return 0;
}

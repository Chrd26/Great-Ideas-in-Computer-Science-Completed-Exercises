#include <iostream>

//A simple execrice to add a two strings in a pointer and output them.

int main(){

std::string *firstName = new std::string;
std::string *lastName = new std::string;

std::cout << &firstName <<std::endl;
std::cout << &lastName << std::endl; 

std::cout << "Enter your name." << std::endl;
std::getline(std::cin, *firstName);


std::cout << "Enter your last name." << std::endl;
std::getline(std::cin, *lastName);

std::cout << *firstName << std::endl;
std::cout << *lastName <<std::endl;


}
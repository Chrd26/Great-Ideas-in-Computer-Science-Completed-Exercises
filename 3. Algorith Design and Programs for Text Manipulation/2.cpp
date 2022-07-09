#include <iostream>

int main(){
char plural = 's';
std::string word;

std::cout << "Βάλτε μια λέξη θηλυκού γένους για να αποτυπωθεί η ονομαστική του ενικού της" << std::endl;
getline(std::cin, word);

std::cout << word << plural << std::endl;

    return 0;
}
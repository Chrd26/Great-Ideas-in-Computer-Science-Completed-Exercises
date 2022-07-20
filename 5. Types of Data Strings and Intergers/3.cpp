#include <iostream>

int main(){

int nums[3];

for(int i = 0; i<3; i++){
int x;
std::cout << "Please add a random number" << std::endl;
std::cin >> x;
nums[i] = x;
}

for(int i = 0; i<3; i++){
    for(int j = i+1; j<3; j++){
    if ((nums[j] < nums[i]))
    {
        int maxNumber = nums[i];
        nums[i] = nums[j];
        nums[j] = maxNumber;
    }

    }
}

for (int i = 0; i < 3; i++)
{
    std::cout << nums[i] << std::endl;
}


    return 0;
}
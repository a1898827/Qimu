#include<iostream>

int array_sum(int array[], int n);

int main() {
    const int SIZE = 5;
    int myArray[SIZE] = {1, 2, 3, 4, 5};

    int sum = array_sum(myArray, SIZE);

    std::cout << "Sum of elements in the array: " << sum << std::endl;

    return 0;

}
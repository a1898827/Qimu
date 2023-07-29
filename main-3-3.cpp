#include <iostream>
#include <unordered_map>
extern double weighted_average(int array[], int n);
int main() {
    int array[] = {1, 2, 1, 4, 1, 3};
    int n = sizeof(array) / sizeof(array[0]);
    double average = weighted_average(array, n);
    std::cout << "Weighted Average: " << average << std::endl; 
    return 0;
}
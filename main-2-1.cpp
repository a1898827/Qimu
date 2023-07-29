#include <iostream>
extern int min_element(int array[], int n);
int main() {
    extern int min_element(int [], int);
    int array[] = {3, 1, 5, 2, 4};
    int n = sizeof(array) / sizeof(array[0]);
    int min_num = min_element(array, n);
    std::cout << "Minimum number: " << min_num << std::endl; 
    return 0;
}
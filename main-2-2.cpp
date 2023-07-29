#include <iostream>
extern int max_element(int array[], int n);
int main() {
    extern int max_element(int [], int );
    int array[] = {3, 1, 5, 2, 4};
    int n = sizeof(array) / sizeof(array[0]);
    int max_num = max_element(array, n);
    std::cout << "Maximum number: " << max_num << std::endl; 
    return 0;
}
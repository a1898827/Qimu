#include <iostream>
extern int sum_two_arrays(int array[], int secondarray[], int n);
int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int n = sizeof(array1) / sizeof(array2[0]);
    int result = sum_two_arrays(array1, array2, n);
    std::cout << "Sum of two arrays: " << result << std::endl; 
    return 0;
}
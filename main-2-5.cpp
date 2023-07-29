#include <iostream>
extern bool is_descending(int array[], int n) ;
int main() {
    int array1[] = {5, 4, 3, 2, 1};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    std::cout << std::boolalpha << is_descending(array1, n1) << std::endl; 
    int array2[] = {3, 1, 5, 2, 4};
    int n2 = sizeof(array2) / sizeof(array2[0]);
    std::cout << std::boolalpha << is_descending(array2, n2) << std::endl; 
    int array3[] = {1};
    int n3 = sizeof(array3) / sizeof(array3[0]);
    std::cout << std::boolalpha << is_descending(array3, n3) << std::endl; 
    int array4[] = {};
    int n4 = sizeof(array4) / sizeof(array4[0]);
    std::cout << std::boolalpha << is_descending(array4, n4) << std::endl; 
    return 0;
}
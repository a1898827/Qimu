#include <iostream>
extern bool is_ascending(int array[], int n);
int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    std::cout << std::boolalpha << (is_ascending(array1, n1) ? "ture" : "false") << std::endl; 
    int array2[] = {3, 1, 5, 2, 4};
    int n2 = sizeof(array2) / sizeof(array2[0]);
    std::cout << std::boolalpha << (is_ascending(array2, n2) ? "ture" : "false") << std::endl; 
    int array3[] = {5};
    int n3 = sizeof(array3) / sizeof(array3[0]);
    std::cout << std::boolalpha << (is_ascending(array3, n3) ? "ture" : "false")<< std::endl; 
    int array4[] = {};
    int n4 = sizeof(array4) / sizeof(array4[0]);
    std::cout << std::boolalpha << (is_ascending(array4, n4) ? "ture" : "false") << std::endl; 
    return 0;
}
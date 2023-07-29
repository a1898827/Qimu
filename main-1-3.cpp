#include <iostream>
extern int  num_count(int array[], int n, int );
int main() {
    int array[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(array) / sizeof(array[0]);
    int target = 2;
    int result = num_count(array, n, target);
    std::cout << "Number of elements equal to " << target << ": " << result << std::endl; 
    return 0;
}
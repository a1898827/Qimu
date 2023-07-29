#include <iostream>
 extern double array_mean(int array[], int n);
int main() {
   
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = array_mean(arr, n);
    std::cout << "Average of array elements: " << result << std::endl; 

    return 0;
}
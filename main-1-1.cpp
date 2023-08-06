#include <iostream>
#include <vector>
 extern int sum_diagonal(int array[4][4]);
int main() {
    
    int matrix[4][4] = {
        {1, 2, 3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int result = sum_diagonal(matrix);
    std::cout << "Sum of elements along the main diagonal: " << result << std::endl; 

    return 0;
}
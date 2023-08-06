#include <iostream>
#include <vector>
extern void print_summed(int array1[3][3],int array2[3][3]);

int main() {
    int matrix1[3][3]= {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

   print_summed(matrix1,matrix2);

    return 0;
}
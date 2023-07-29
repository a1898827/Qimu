#include <iostream>
#include <algorithm>
int median_array(int array[], int n) {
    if (n < 1 || n % 2 == 0) {
        return 0;
    }   
    std::sort(array, array + n);
    double median;
    if (n % 2 == 1) { 
        median = static_cast<double>(array[n / 2]);
    } else { 
        median = static_cast<double>(array[n / 2 - 1] + array[n / 2]) / 2.0;
    }
    return median;
}
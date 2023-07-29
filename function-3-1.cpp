#include <iostream>
bool is_fanarray(int array[], int n) {
    if (n < 1) {
        return false;
    }
    bool is_palindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (array[i] != array[n - 1 - i]) {
            is_palindrome = false;
            break;
        }
    }
    bool is_ascending = true;
    for (int i = 0; i < n / 2; i++) {
        if (array[i] > array[i + 1]) {
            is_ascending = false;
            break;
        }
    }
    return is_palindrome && is_ascending;
}
#include <iostream>
extern int count_evens(int number);
int main() {
    int number1 = 10;
    std::cout << "Number of even numbers between 1 and " << number1 << ": " << count_evens(number1) << std::endl;
    int number2 = 5;
    std::cout << "Number of even numbers between 1 and " << number2 << ": " << count_evens(number2) << std::endl;
    int number3 = 0;
    std::cout << "Number of even numbers between 1 and " << number3 << ": " << count_evens(number3) << std::endl;
    return 0;
}
#include<iostream>
using namespace std;
extern void print_pass_fail(char grade);
int main() {
    char grade;
    cout << "please enter the level（A、B、C、D,E）: ";
    cin >> grade;
    print_pass_fail(grade);
    return 0;
}
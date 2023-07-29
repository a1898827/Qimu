#include<iostream>
using namespace std;
void print_pass_fail(char grade) {
    if(grade=='A'||grade=='B'||grade=='C'||grade=='D'||grade=='E'){
    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
            cout << "Pass" << endl;
            break;
        case 'D':
        case 'E':
            cout << "Fail" << endl;
            break;
    }
    }
    else{
        cout<<"Nothing"<<endl;
    }
}
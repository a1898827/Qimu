#include <iostream>
#include <bitset>
using namespace std;

void print_binary_str(std::string decimal_number) {
    unsigned long long decimal_num = stoull(decimal_number);
    string binary_str = bitset<64>(decimal_num).to_string();
    
    size_t pos = binary_str.find('1');
    if (pos != string::npos) {
        binary_str = binary_str.substr(pos);
    }

    cout << binary_str << endl;
}
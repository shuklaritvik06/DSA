#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>


using namespace std;

string convert_to_string(int a) {
    if (a == 0) return "0";
    string rem;
    while (a > 0) {
        rem += to_string(a % 2);
        a = a / 2;
    }
    reverse(rem.begin(), rem.end());
    return rem;
}

int convert_to_int(int a) {
    int binaryNumber = 0;
    int i = 0;
    while (a > 0) {
        int bit = a % 2;
        binaryNumber = bit * pow(10, i++) + binaryNumber;
        a = a / 2;
    }
    return binaryNumber;
}

string convert_to_binary_bitwise(int a) {
    if (a == 0) return "0";
    string rem;
    while (a > 0) {  
        rem += (a & 1) ? '1' : '0';;
        a = a >> 1;
    }
    reverse(rem.begin(), rem.end());
    return rem;
}

int convert_binary_to_decimal(int c){
    int number = 0;
    int i = 0;
    while(c>0){
       int digit = c % 10;
       number = digit*pow(2,i++) + number;
       c = c/10;
    }
    return number;
}

int convert_binary_to_bitwise_decimal(int c){
    
}

int main() {
    int num = 12;
    string binary = convert_to_string(num);
    int binaryNumber = convert_to_int(40);
    cout << "Binary representation of " << num << " is: " << binary << endl;
    cout << "Binary representation of " << num << " is: " << binaryNumber << endl;
    cout << "Binary representation of " << num << " is: " << convert_to_binary_bitwise(20) << endl;
    cout << "Decimal of 11001 is: " << convert_binary_to_decimal(11001) << endl;
    return 0;
}

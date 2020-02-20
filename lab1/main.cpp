#include <iostream>
#include <string>

using namespace std;

unsigned numberFromDigits(string digits, unsigned base);
string digitsFromNumber(unsigned number, unsigned base);

int main() {
    unsigned digits = 108;
    unsigned base = 5;
    string num = digitsFromNumber(digits, base);
    cout << num << endl;
}

unsigned numberFromDigits(string digits, unsigned base) {
    unsigned ret = 0;
    unsigned num = 0;
    unsigned numB = 1;
    for(int i = 1; i <= digits.size(); ++i) {
        num = (digits[digits.size() - i] - '0') * numB;
        ret += num;
        numB *= base;
    }
    return ret;
}

string digitsFromNumber(unsigned number, unsigned base) {
    string ret;
    for(; number > 0; number/=base) {
        ret = static_cast<char>(number % 5+'0') + ret;
    }

    return ret;
}
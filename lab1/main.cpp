#include <iostream>
#include <string>

using namespace std;

unsigned numberFromDigit(string digits, unsigned base);

int main() {
    string digits = "3051";
    unsigned base = 4;
    unsigned num = numberFromDigit(digits, base);
    cout << num << endl;
}

unsigned numberFromDigit(string digits, unsigned base) {
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
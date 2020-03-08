#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double convert(string s);
double bitsToDigit(string s);

int main ()
{
    string s = "11101110";
    cout << convert(s) << endl;
    
    
}

double convert(string s)
{
    char sign = s[0];
    string significand = s.substr(4, 7);
    double ret = 0;
    double expo = bitsToDigit(s.substr(1, 3)) - 3;
    
    //calculating exponents

    if(expo != 0 && expo != 7)
    {
        //inserting 1 at the beginning of significand
        significand.insert(0, 1, '1');
        cout << "Expo: " << expo << endl;
        //Counting decimal places
        double shift = 3;
        for(int i = 4; significand[i] == '1'; --i)
        {
            shift --;
        }
        cout << "shift:" << shift << endl;
        //subtracting shift from exponent
        expo -= shift;
        cout << "Expo: " << expo << endl;
        //deleting extra zeros from significand
        if(shift == 3)
        {
            significand.pop_back();
        }
        ret = bitsToDigit(significand);
        cout << "Ret:" << ret << endl;
        ret *= pow(2, expo);
    }

    if (sign == '1')
    {
        ret *= -1;
    }

    return ret;
}

//Takes a string of bits and converts to a digit
double bitsToDigit(string s)
{
    double power = 0.0;
    double base = 2.0;
    double ret = 0;
    for(int i = s.size() - 1; i >= 0; --i)
    {
    if(s[i] == '1')
    {
        ret += pow(base, power);
    }
    power++;
    }
    return ret;
}
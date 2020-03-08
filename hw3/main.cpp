#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double convert(string s);
double bitsToDigit(string s);
double calc(string sig, double power);

int main ()
{
    string s = "11110001";
    cout << convert(s) << endl;
    
    
}

double convert(string s)
{
    char sign = s[0];
    string significand = s.substr(4, 7);
    double ret = 0;
    string exponent = s.substr(1, 3);
    double power = bitsToDigit(s.substr(1, 3)) - 3;
    //double power = -2;
    
    //calculating exponents

    if(exponent != "000" && exponent != "111")
    {
        //inserting 1 at the beginning of significand
        significand.insert(0, 1, '1');
        ret = calc(significand, power);
    }
    else if (exponent == "000" && significand != "0000")
    {
        power = -2;
        ret = calc(significand, power);
    }
    else if (exponent == "000" && significand == "0000")
    {
        ret = 0;
    }
    else if (exponent == "111" && significand == "0000")
    {
        ret = pow(2, 6000);
    }
    else if (exponent == "111" && significand != "0000")
    {
        ret = nan(0);
    }
    
    

    if (sign == '1')
    {
        return ret *= -1;
    }
    else
    {
        return ret;
    }
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

double calc(string sig, double power)
{
    double ret = 0;
    cout << "Expo: " << power << endl;
    //Counting decimal places
    double shift = 4;
    if(sig[4] == '0')
    {
        for(int i = 3; sig[i] != '1'; --i)
        {
            shift --;
            sig.pop_back(); //deleting extra zeros from significand
        }
    }
    //subtracting shift from exponent
    power -= shift;
    ret = bitsToDigit(sig);
    ret *= pow(2, power);
    return ret;
}
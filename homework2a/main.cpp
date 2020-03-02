//Fearing, Vincent
//Comp. Architecture M W
//Section# 25865
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string add(string a, string b, int & flags);

int main ()
{
    string a = "0110";
    string b = "1010";
    int flags = 20;


    cout << add(a, b, flags) << endl;
    cout << flags << endl;
    
}

string add(string a, string b, int & flags)
{
    flags = 0;
    int c = 0;
    int num = 0;
    string result;
    string nzvc = "0000";

    for(int i = 3; i >= 0; --i)
    {
        num = (a[i] - '0') + (b[i] - '0');
        num += c;
        if(num == 0)
        {
            result.insert(0, 1, '0');
            c = 0;
        }
        else if(num == 1)
        {
            result.insert(0, 1, '1');
            c = 0;
        }
        else if(num == 2)
        {
            result.insert(0, 1, '0');
            c = 1;
        }
        else
        {
            result.insert(0, 1, '1');
            c = 1;
        }
        
    }
    //N
    if(result[0] == '1')
    {
        //n = true;
        nzvc[0] = '1';
    }
    else
    {
        //n = false;
        nzvc[0] = '0';
    }

    //Z
    if(result == "0000")
    {
        nzvc[1] = '1';
    }
    else
    {
        nzvc[1] = '0';
    }

    //V
    if((a[0] == '0' && b[0] == '0') && result[0] == '1')
    {
        nzvc[2] = '1';
    }
    else if((a[0] == '1' && b[0] == '1') && result[0] == '0')
    {
        nzvc[2] = '1';
    }
    else 
    {
        nzvc[2] = '0';
    }

    //C
    if(c == 0)
    {
        nzvc[3] = '0';
    }
    else
    {
        nzvc[3] = '1';
    }

    float power = 0.0;
    float base = 2.0;
    for(int i = 3; i >= 0; --i)
    {
        if(nzvc[i] == '1')
        {
            flags += pow(base, power);
        }
        power++;
    }
    return result;
}
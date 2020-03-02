#include <iostream>
#include <string>

using namespace std;

string add(string a, string b, int & flags);

int main ()
{
    string a = "1111";
    string b = "0011";
    int flags = 0;

    cout << add(a, b, flags);
    
}

string add(string a, string b, int & flags)
{
    bool n = false;
    bool z = false;
    bool v = false;
    int c = 0;
    int num = 0;
    string result;

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
        n = true;
    }
    else
    {
        n = false;
    }

    //Z
    if(result == "0000")
    {
        z = true;
    }
    else
    {
        z = false;
    }

    //V
    if((a[0] == '0' && b[0] == '0') && result[0] == '1')
    {
        v = true;
    }
    else if((a[0] == '1' && b[0] == '1') && result[0] == '0')
    {
        v = true;
    }
    else 
    {
        v = false;
    }
    
    cout << "N: " << n << endl;
    cout << "Z: " << z << endl;
    cout << "V: " << v << endl;
    cout << "C: " << c << endl;
    return result;

}
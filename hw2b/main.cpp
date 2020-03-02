//Fearing, Vincent
//Comp. Architecture M W
//Section# 25865

#include <string>
#include <iostream>
#include <bitset>


using namespace std;

void show(unsigned n);

int main()
{
    unsigned n = 256 + 12;
    show(n);
    return 0;
}

void show(unsigned n)
{
    string r;
    //string r = "00000000000000000000000000000000";
    int count = 0;
    for(int i = 32; i > 0; --i)
    {
        ++count;
        if(n % 2 != 0)
        {
            r.insert(0, 1, '1');
        }
        else
        {
            r.insert(0, 1, '0');
        }
        n /= 2;

        if(count == 8 && i > 1)
        {
            r.insert(0, 1, ' ');
            count = 0;
        }
    }
    cout << r << endl;
}
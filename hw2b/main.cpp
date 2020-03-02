//Fearing, Vincent
//Comp. Architecture M W
//Section# 25865

#include <string>
#include <iostream>
#include <bitset>


using namespace std;

void show(unsigned n);
void wohs(unsigned n);
unsigned ones(unsigned n);
unsigned zeroes(unsigned n);

int main()
{
    unsigned n = 256 + 12;
    //show(n);
    //wohs(n);
    cout << "Number of ones: " << zeroes(n) << endl;
    return 0;
}

void show(unsigned n)
{
    string r;
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

void wohs(unsigned n)
{
    string r;
    int count = 0;
    for(int i = 32; i > 0; --i)
    {
        ++count;
        if(n % 2 != 0)
        {
            r.push_back('1');
        }
        else
        {
            r.push_back('0');
        }
        n /= 2;

        if(count == 8 && i > 1)
        {
            r.push_back(' ');
            count = 0;
        }
    }
    cout << r << endl;
}

unsigned ones(unsigned n)
{
    string r;
    int count = 0;
    unsigned ones = 0;
    for(int i = 32; i > 0; --i)
    {
        ++count;
        if(n % 2 != 0)
        {
            r.insert(0, 1, '1');
            ++ones;
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
    return ones;
}

unsigned zeroes(unsigned n)
{
    string r;
    int count = 0;
    unsigned zeros = 0;
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
            ++zeros;
        }
        n /= 2;

        if(count == 8 && i > 1)
        {
            r.insert(0, 1, ' ');
            count = 0;
        }
    }
    return zeros;
}
#include <iostream>
#include <string>

using namespace std;

string add(string a, string b, int & flags);

int main ()
{
    string a = "0110";
    string b = "1010";
    int flags = 0;
    
}

string add(string a, string b, int & flags)
{
    bool n = false;
    bool z = false;
    bool v = false;
    bool c = false;
    string result;

    for(int i = 0; i < a.size(); ++i)
    {
        if(a.at(i) == '0' && b.at(i) == '0')
        {
            result.insert(0, 1, '0');
        }
    }

}
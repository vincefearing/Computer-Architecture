#include <iostream>
#include <string>

using namespace std;

double convert(string s);

int main ()
{
    string s = "00011101";
    //string s = "00011101";
    string expo = s.substr(1, 3);
    
    
}

double convert(string s)
{
    char sign = s[0];
    string expo = s.substr(1, 3);
    string significand = s.substr(4, 7);

    if(expo != "000" && expo != "111")
    {
        
    }

    /*for( int i = 0; i < s.size(); ++i)
    {

    }*/
}
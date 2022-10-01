#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;
    int c;
    try
    {
        if(b == 0)
        {
            throw "Divide by zero error";
        }
        c = a/b;
        cout << c << endl;
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
    }
    return 0;
}
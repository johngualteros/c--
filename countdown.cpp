#include<iostream>
using namespace std;

int main()
{
    int numberCount = 0;
    cout << "Enter the count number:\n";
    cin >> numberCount;
    for(int i = numberCount; i > 0; i--)
    {
        cout << i << endl;
        if( i % 5 == 0)
        {
            cout << "Beep" << endl;
        }
    }
}
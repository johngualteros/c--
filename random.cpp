#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int random_number = rand();
    cout << random_number << endl;

    for(int i = 0; i <= 10; i++)
    {
        cout << 1 + (rand() % 6) << endl;
    }
    return 0;
}
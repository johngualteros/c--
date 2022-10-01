#include<iostream>
using namespace std;

int main()
{
    int ages[5];
    int min;
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter age of person " << i + 1 << ": ";
        cin >> ages[i];
    }

    min = ages[0];

    for(int i = 0; i < 5; i++)
    {
        if(ages[i] < min)
        {
            min = ages[i];
        }
    }

    float total_with_discount = (50 - min) / 2.00;

    cout << "Total with discount: " << total_with_discount << endl;

    return 0;
}
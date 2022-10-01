#include<iostream>
using namespace std;

int main()
{
    int numberSeating = 50;
    int numberPassengers = 0;
    cout << "Enter the number of Passangers:\n";
    cin >> numberPassengers;
    int result = numberPassengers % numberSeating;
    int emptyChairs = numberSeating - result;
    cout << "Number of seats: " << emptyChairs << endl;
    return 0;
}
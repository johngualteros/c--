#include<iostream>
using namespace std;

bool isPalindrome(int number)
{
    int reverse = 0;
    int temp = number;
    while(temp != 0)
    {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return reverse == number;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(isPalindrome(number))
    {
        cout << number << " The number is a palindrome" << endl;
    }
    else
    {
        cout << number <<" The number is not a palindrome" << endl;
    }
    return 0;
}
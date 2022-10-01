#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    public:
        string name;
        void sayHi(){
            cout << "Hi" << endl;
        }
}
int main()
{
    BankAccount test;
    test.name = "Test";
    test.sayHi();
    cout << test.name << endl;
    return 0;
}

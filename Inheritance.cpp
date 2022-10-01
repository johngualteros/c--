#include<iostream>
#include<string>
using namespace std;

class Mother{
    public:
        Mother();
        ~Mother();
        virtual void sayName(){};
};
class Daughter : public Mother
{
    public:
        Daughter() {};
        ~Daughter() {};
        void sayName()
        {
            cout << "I am your daughter" << endl;
        };
}

int main()
{
    Daughter daughter;
    daughter.sayName();
    return 0;
}
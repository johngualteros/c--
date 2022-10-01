#include<iostream>
#include<string>
using namespace std;

class Encapsulation
{
    public:
        Encapsulation(string name)
        {
            this->name = name;
        }
        void setName(string newName){
            name = newName;
        }
        string getName(){
            return name;
        }
    private:
        string name;
}

int main()
{
    Encapsulation test("Test");
    cout << test.getName() << endl;
    return 0;
}
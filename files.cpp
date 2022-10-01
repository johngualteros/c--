#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("test.txt", ios::out | ios::trunc);
    file << "Hello World" << endl;
    file.close();
    return 0;
} 
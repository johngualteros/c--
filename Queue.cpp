#include<iostream>
using namespace std;
class Queue{
    int size;
    int* queue;
    public:
        Queue(){
            size = 0;
            queue = new int[100];
        }
        void remove(){
            if(size == 0){
                cout << "Queue is empty" << endl;
                return;
            }else{
                for(int i = 0; i < size - 1; i++){
                    queue[i] = queue[i+1];
                }
                size--;
            }
        }
        void print(){
            if (size == 0)
            {
                cout << "Queue is empty" << endl;
                return;
            }
            for(int i = 0; i < size; i++){
                cout << queue[i] << endl;
            }
            cout << endl;
        }
        // Here is the add function
        void add(int value){
            queue[size] = value;
            size++;
        }
};
int main()
{
    Queue queue;
    queue.add(42);queue.add(2);queue.add(8);
    queue.add(1);
    queue.print();
    queue.remove();
    queue.add(128);
    queue.print();
    queue.remove();
    queue.remove();
    queue.print();
    return 0;
}
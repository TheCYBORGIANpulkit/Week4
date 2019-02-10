#include<iostream>
using namespace std;

class QueueArr{
    //defining an array
    public:
    int arr[20];
    int Front;
    int End;
    //constructor to put front and end
    //front in and End out
    QueueArr(){
        //indexing to the first element
        Front = -1;
        End = -1;
    }
    //function to insert
    void Enqueue(int value){
        if(Front == -1){
            End++;
            Front++;

              arr[End] = value;
              arr[Front] = value;
        }
        else{
           End++;
           arr[End] = value;
        }
    }
    //function to delete
    void Dequeue(){
        if(End == -1){
            cout<< NULL;
        }
        else{
           // int *temp = &Front;
            Front++;
            //delete temp;
        }

    }

    void Display(){

        for(int i=Front;i<=End;i++){
            cout<< arr[i] <<" ";

        }
        cout<<endl;
    }

    bool isEmpty(){
        if(Front == -1){
            cout<< "The queue is empty. "<<endl;
            return false;
        }
        else{
            cout<< "NO, the queue is not empty. "<< endl;
            return true;
        }
    }
};

int main(){
    QueueArr q1;
    q1.Enqueue(1);

    q1.Enqueue(2);
    q1.Enqueue(5);
    q1.Enqueue(8);
    q1.Enqueue(13);
    q1.Enqueue(21);
    q1.Display();
    q1.Enqueue(34);
    q1.Display();
    q1.Dequeue();
    q1.Display();
    q1.isEmpty();
    //cout<< "The size of the stack is:" <<q1.Size()<<endl;
    return 0;
}


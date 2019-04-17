#include<iostream>
#include "LL.cpp"
using namespace std;

class QueueLL{
public:
    Node *Front;
    Node *End;
    Linkedlist l1;
    QueueLL(){
        Front = NULL
        End = NULL;
    }
    //Pushes on top
    void Enqueue(int val){
        // InsertAt(int val)
        l1.Insert(val);
        //End is head
        End = l1.head;
    }
    void Dequeue(){
        //Delete from the front
        l1.DeleteAt(0);
        //Front is tail
        Front = l1.tail;
    }
    bool isEmpty(){
        if(Front = NULL) return true;
        else return false;
    }
    int Size(){
        l1.CountItems();
    }
    void Display(){
        l1.Display();
    }

};

int main(){
    QueueLL q1;
    for(int i=1;i<6;i++){
        q1.Enqueue(i);
    }

    q1.Display();
    q1.Enqueue(6);
    q1.Display();
    q1.Dequeue();
    q1.Display();
    if(q1.isEmpty() == 0){
        cout<<"The queue is not empty "<<endl;
    }
    else{
        cout<< "The queue is empty "<<endl;
        cout<< "the no. of elements is "<< q1.Size()<<endl;
    }
    return 0;
}


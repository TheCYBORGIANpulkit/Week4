#include<iostream>
using namespace std;

class StackArr{
    //M E p B S
    public:
    int arr[20];
    int top;
    //Constructor to put the top
    StackArr(){
       //putting top pointer to the first element of the array
        top = -1;
    }

    //Now the functions push, pop, isEmpty
    void push(int value){
        top++;
        arr[top] = value;

    }

    void pop(){

        //int *temp = &top;
        top--;
        //delete temp;
    }

    void Display(){
        for(int i=top;i>=0;i--){
            cout<< arr[i] <<" ";

        }
        cout<<endl;
    }
    bool isEmpty(){
        if(top == -1){
            cout<< "The stack is empty. "<<endl;
            return false;
        }
        else{
            cout<< "NO, the stack is not empty. "<< endl;
            return true;
        }
    }
    int Size(){
        int i=0;
        while(arr[i] != NULL){
            i++;
        }
        return i;
    }

};

int main(){
    //defining the array
    StackArr s1;
    s1.push(1);

    s1.push(2);
    s1.push(5);
    s1.push(8);
    s1.push(13);
    s1.push(21);
    s1.Display();
    s1.pop();
    s1.Display();
    s1.isEmpty();
    cout<< "The size of the stack is:" <<s1.Size()<<endl;

    return 0;
}

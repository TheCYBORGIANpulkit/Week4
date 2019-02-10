
#include"LL.cpp"
using namespace std;
class StackLL{
public:
    Node* top;
    Linkedlist l1;
    Stack(){
        top = l1.head;
    }
    //Pushes on top
    void push(int value){
        if(top ==NULL){
            l1.Insert(value);
        }
        else{
            // insertAt(int pos, int val)
            l1.InsertAt(value,1);
            //top = new_head;
            top = l1.head;
        }
    }
    //pops the top
    void pop(){
        //delete at (int pos)
        l1.Delete();
        //top = new_head;
        top = l1.head;
    }

    bool isEmpty(){
        if(top == NULL)return true;
        else return false;
    }

    int size(){
        return l1.CountItems();
    }


    void Display(){
        l1.Display();
    }
};

int main(){
    StackLL s1;
    for(int i=0;i<5;i++){
        s1.push(i);

    }
    s1.Display();
    s1.push(6);
    s1.Display();
    s1.push(10);
    s1.Display();
    s1.pop();
    s1.Display();
    return 0;
}


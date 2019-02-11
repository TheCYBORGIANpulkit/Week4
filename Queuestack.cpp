#include"StackArr.cpp"
using namespace std;

class Queuestack{
    //declaring two stacks s1 for storing data and s2 for helping during operations
    StackArr s1, s2;
    public:
        void Enqueue(int x){
            //if the stack is empty than direct;y push the first element
            if (s1.isEmpty() == true){
                s1.push(x);
            }
            else{
            //otherwise moving elements from S1 to S2
                while(s1.isEmpty() != true){
                    //moving the element from the first stack and inserting it in the second one
                    int  y = s1.pop();
                    s2.push(y);
                }
            //inserting the new element
                s1.push(x);
                while(s2.isEmpty() != true){
                    //moving the element from the first stack and inserting it in the second one
                    int  y = s2.pop();
                    s1.push(y);
                }
            }

        }

        void DISPLAY(){
            s1.Display();
        }
        void Dequeue(){
            s1.pop();
        }

        bool isempty(){
           s1.isEmpty();
        }
        int SIZE(){
            s1.Size();
        }
};

int main(){
    Queuestack q1;
    q1.Enqueue(1);
     q1.DISPLAY();
    q1.Enqueue(2);

    q1.Enqueue(5);
    q1.Enqueue(8);
    q1.Enqueue(13);


    q1.DISPLAY();
    q1.Enqueue(21);
    q1.Enqueue(34);
    q1.DISPLAY();

    q1.Dequeue();
    q1.DISPLAY();
    cout<< "The no. of elements in queue is: "<<q1.SIZE()<<endl;
    return 0;
}











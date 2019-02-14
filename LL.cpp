#include<iostream>
using namespace std;

class Node{
    //data
    public:
    int data;
    //pointer to the next node
    Node *next;
    //constructor that makes pointer point to NULL

    Node(){
        next = NULL;
    }

};

class Linkedlist{
      public:
    //pointer to the first element
    Node* head;
    //pointer to the last element
    Node* tail;
    //constructor to point them to NULL

    Linkedlist(){
        head = NULL;
        tail = NULL;
    }

    void Insert(int val){

        //creating a new node in heap
            Node* temp = new Node;
        //inserting data in the new node
            temp->data = val;
        //in case of insertion of first element
             if(head==NULL && tail==NULL){
            head = temp;
            tail = temp;
        }
       else{
       tail->next=temp;
       }
       tail = temp;
    }
    int CountItems(){
        //make the pointer counter
        Node* Count = head;
        //looping thr counter
        int i=1;
        while(Count->next != tail){
                i++;
            Count=Count->next;
        }
        return i+1;
    }
    void InsertAt(int pos, int val){
        //create a new node
        Node*temp = new Node;
        //insert data in it
        temp->data = val;
        //
        if(pos==1){
            head = temp;
            tail = temp;
        }
        else{
        //counter should be at last element)
            //moving the pointer
              Node* current = head;
              int i=1;
            while(i<pos-1){
                    i++;
                current = current->next;
            }
            temp->next = current->next;
            current->next=temp;
        }

    }

    void Display(){
        //initialize the pointer
            Node* current = head;
        while(current != NULL){
            cout<< current->data<< "->";
            current=current->next;
        }
        cout<< "NULL"<<endl;
    }
    void Delete(){
        //storing last element temporarily
        Node* temp = tail;
        //moving tail to the second last element
        Node* current = head;
        while((current->next)->next != NULL){
            current = current->next;
        }
        current->next = NULL;
        tail = current;
        delete temp;

    }
    void DeleteAt(int pos){
        //moving tail to the second last element
       //moving the pointer
       if(head == NULL){
          cout<< "Queue does not have that many elements. "<<endl;
       }
       else{
          Node* current = head;

          if(pos == 0){
            head = current->next;
            delete current;
          }
          else{
                int i=1;
                while(i<pos-1){
                    i++;
                    current = current->next;
                }
                //storing the node to be deleted in the temp
                Node* temp = current->next;
                //linking further nodes to the previous ones
                current->next = temp->next;
                delete temp;
            }
        }
    }

};

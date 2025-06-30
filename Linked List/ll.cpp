#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next=NULL;
    }
};

class List {

    Node* head;
    Node* tail;
public:
    List(){
        head=NULL;
        tail=NULL;
    }

    void push_front(int value){
        Node* newNode = new Node(value); //dynamic allocation so that it does not get deleted
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode->next = head;
            head=newNode;
        }
    }

    void push_back(int value){
        Node* newNode = new Node(value);
        if(head!=NULL){
            tail->next=newNode;
            tail=tail->next;
        }else{
            head=tail=newNode;
        }
    }

    void pop_front(){
        Node* temp = head;
        if(temp!=NULL){
            Node* new_head=temp->next;
            temp->next=NULL;
            delete temp;
            head=new_head;
        }else{
            cout<<"Linked List is empty"<<endl;
            return;
        }
    }

    void pop_back(){
        if(head==NULL){
            cout<<"LL is Empty"<<endl;
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;
        
        
    }

    void insert(int val, int position){
        if(position==0){
            push_front(val);
            return;
        }
        int count=0;
        Node* temp=head;
        while(count!=position-1){
            temp=(*temp).next;
            count+=1;
        }
        Node* newNode= new Node(val);
        Node* nextNode=temp->next;
        temp->next=newNode;
        newNode->next=nextNode;
    }

    int search(int key){
        Node* temp=head;
        int idx=0;
        while(temp!=NULL){
            if(temp->data==key){
                return idx;

            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }

    void print_ll(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp=temp->next;
        }cout << endl;
    }


};


int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.print_ll();
    ll.pop_front();
    ll.print_ll();
    ll.pop_back();
    ll.insert(3, 1);
    ll.print_ll();
    cout << "Found 3: "<<ll.search(3) << endl;
    return 0;
}
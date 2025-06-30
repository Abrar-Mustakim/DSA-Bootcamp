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


//leetcode 206
//https://leetcode.com/problems/reverse-linked-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {

//         ListNode* prevv=NULL;
//         ListNode* curr=head;
//         ListNode* nextt=NULL;
//         while(curr!=NULL){
//             nextt=curr->next;
//             curr->next=prevv;
//             prevv=curr;
//             curr=nextt;
//         }
//         return prevv;
        
//     }
// };



//leetcode 876
//https://leetcode.com/problems/middle-of-the-linked-list/description/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
//  */
// class Solution {
// public:
//     int count(ListNode* head){
//         int counts=0;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             counts+=1;
//             temp=temp->next;
//         }
//         return counts;
//     }
//     ListNode* middleNode(ListNode* head) {
//         int size=count(head);
//         int position=size/2;
//         int i=0;
//         ListNode* temp=head;
//         while(i!=position){
//             temp=temp->next;
//             i+=1;
//         }
//         return temp;
//     }
// };

//two pointer approach
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* fast=head;
//         ListNode* slow=head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         return slow;
        
//     }
// };



//leetcode 141
//https://leetcode.com/problems/linked-list-cycle/description/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast){
//                 return true;
//             }
//         }
//         return false;
//     }
// };



//leetcode 142
//https://leetcode.com/problems/linked-list-cycle-ii/description/

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow=head;
//         ListNode* fast=head;
//         bool isCycle=false;
//         while(fast!=NULL and fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast){
//                 isCycle=true;
//                 break;
//             }

//         }
//         if(!isCycle){
//             return NULL;
//         }
//         slow=head;
//         //ListNode* prev=NULL;
//         while(slow!=fast){
//             slow=slow->next;
//             //prev=fast;
//             fast=fast->next;
//         }
//         //prev.next=NULL;
//         return slow;
        

        
        
//     }
// };


//leetcode 21
//https://leetcode.com/problems/merge-two-sorted-lists/description/

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* dummy = new ListNode(0);
//         ListNode* curr=dummy;

//         while(list1!=NULL && list2!=NULL){
//             if(list1->val > list2->val){
//                 curr->next=list2;
//                 list2=list2->next;
//             }else{
//                 curr->next=list1;
//                 list1=list1->next;
//             }
//             curr=curr->next;            
//         }
//         if(list1){
//             curr->next=list1;
//         }else if(list2){
//             curr->next=list2;
//         }

//         return dummy->next;
        
//     }
// };
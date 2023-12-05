#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(){
            this->prev = NULL;
            this->next = NULL;
        }

        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
};

void print_linked_list(Node* &head){
    Node* curr = head;
    while(curr != NULL){
        cout<< curr->data << "->";
        curr = curr->next;
    }
    cout<<endl;
}

int get_length(Node* &head){
    Node* curr = head;
    int length = 0;
    while(curr != NULL){
        length++;
        curr = curr->next;
    }
    return length;
}

void insert_at_head(Node* &head, int data){
    Node* new_node = new Node(data);
    if(head == NULL){
        head = new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

void insert_at_end(Node* &head, int data){
    Node* new_node = new Node(data);
    if(head == NULL){
        head = new_node;
        return;
    }
    Node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    new_node->prev = curr;
    curr->next = new_node;
}

void insert_at_position(Node* &head, int position, int data){
    if(head == NULL || position<=1){
        insert_at_head(head, data);
        return;
    }
    int length = get_length(head);
    if(position > length){
        insert_at_end(head, data);
        return;
    }
    Node* new_node = new Node(data);
    Node* curr_node = head;
    Node* prev_node = NULL;
    while(position != 1){
        curr_node = curr_node->next;
        position--;
    }
    prev_node = curr_node->prev;
    new_node->prev = prev_node;
    new_node->next = curr_node;
    prev_node->next = new_node;
    curr_node->prev = new_node;
}



int main(){

    Node* head = NULL;
    insert_at_head(head, 20);
    insert_at_head(head, 10);
    insert_at_end(head, 30);
    insert_at_position(head, 2, 15);
    print_linked_list(head);
    cout<<get_length(head)<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(){
            this->next = NULL;
        }

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void print_linked_list(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int get_length(Node* &head){
    Node* temp = head;
    int length = 0;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

void insert_at_head(Node* &head, int data){
    Node* new_node = new Node(data);
    if(head == NULL){
        head = new_node;
    }else{
        new_node->next = head;
        head = new_node;
    }
}

void insert_at_end(Node* &head, int data){
    Node* new_node = new Node(data);
    if(head == NULL){
        head = new_node;
    }else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void insert_at_position(Node* &head, int position, int data){
    if(position < 1){
        cout << "invalid position." << endl;
        return;
    }
    if(position == 1){
        insert_at_head(head, data);
        return;
    }
    int length = get_length(head);
    if(position <= length){
        Node* new_node = new Node(data);
        Node* curr = head;
        while(position != 2){
            curr = curr->next;
            position--;
        }
        new_node->next = curr->next;
        curr->next = new_node;
    }
    if(position == length+1){
        insert_at_end(head, data);
        return;
    }
    cout<<"invalid position."<<endl;
}

int main(){

    Node* head = NULL;

    insert_at_head(head,10);
    insert_at_end(head,20);
    insert_at_end(head,30);
    insert_at_end(head,50);
    insert_at_end(head,60);
    insert_at_position(head,4,40);
    insert_at_position(head,7,70);
    print_linked_list(head);
    cout<<get_length(head)<<endl;

    return 0;
}
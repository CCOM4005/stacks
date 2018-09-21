
#include <iostream>

using namespace std;

struct node {
    int data;
    node *link;
};

class stack
{
public:
    stack(){
        head = NULL;
    }
    void push(int n) {
        node *tmp = new node;
        tmp->data = n;
        tmp->link = NULL;
        if(head == NULL)
            head = tmp;
        else
        {
            tmp->link = head;
            head = tmp;
        }
    }
    void pop(){
        if(head != NULL)
        {
            node *tmp = head;
            head = head->link;
            delete tmp;
        }
    }
    int top(){
        if(head != NULL)
            return head->data;
        else
            return 0;
    }
    void display(){
        node *current = head;
        while(current != NULL)
        {
            cout<<current->data<<endl;
            current = current->link;
        }
    }
    bool empty() {
        if(head == NULL)
            return true;
        else
            return false;
    }
private:
    node *head;
};


int main(int argc, char const *argv[])
{
    stack myStack;
    myStack.push(5);
    myStack.push(3);
    myStack.push(2);
    myStack.display();
    // myStack.pop();
    // myStack.display();
    // cout<<myStack.top()<<endl;
    return 0;
}
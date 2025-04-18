#include <bits/stdc++.h> 
class CircularQueue{
    public:
    int* arr;
    int front;
    int rear;
    int size;
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if((front==0 && rear == size-1) || (rear == (front-1)%(size-1))){
            return false;
        }else if(front == -1){
            front = 0;
            rear = 0;
            arr[rear] = value;
        }else if(front != 0 && rear == size-1){
            rear = 0;
            arr[rear] = value;
        }else{
            rear++;
            arr[rear] = value;
        }
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(front==-1){
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){
            front=rear=-1;
        }else if(front == size-1){
            front = 0;
        }else{
            front++;
        }
        return ans;


    }
};
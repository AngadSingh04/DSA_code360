#include <bits/stdc++.h> 
class Queue {

public:
    int* arr;
    int f;
    int rear;
    int size;
    Queue() {
        // Implement the Constructor
        size = 100001;
        arr = new int[size];
        f = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(f==rear){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size){
            cout << "Queue is full" << endl;
        }else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()){
            return -1;
        }else{
            int ans = arr[f];
            arr[f] = -1;
            f++;
            if(f==rear){
                f=0;
                rear=0;
            }
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(isEmpty()){
            return -1;
        }else{
            return arr[f];
        }
    }
};
#include "queue.h"

template<typename T>
struct Queue<T>::Node {
    T data;
    Node* next;
    Node(T data): data(data) {}
};

template<typename T>
Queue<T>::Queue(): front(nullptr), rear(nullptr) {}

template<typename T>
Queue<T>::~Queue() {
    while(!isEmpty()) {
        deQueue();
    }
}

template<typename T>
void Queue<T>::enQueue(const T& element) {
    Node* newNode = new Node(element);
    if (isEmpty()) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    size++;
}

template<typename T>
void Queue<T>::deQueue() {
    if (!isEmpty()) {
        Node* tmp = front;
        front = front->next;
        delete tmp;   
        size--;     
    }
}

template<typename T>
bool Queue<T>::isEmpty() {
    return size == 0;
}

template<typename T>
unsigned int Queue<T>::getSize() {
    return size;
}
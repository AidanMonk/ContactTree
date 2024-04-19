#pragma once

using namespace std;
#include "Node.h"

template <typename T>
class Queue
{
    private:
        Node<T>* front;
        Node<T>* rear;
        int size;
    public:
        void Enqueue(T* ref);
        T* Dequeue();
        int GetSize();
        bool IsEmpty();
        void Display();
};


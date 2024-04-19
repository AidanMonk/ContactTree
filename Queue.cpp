using namespace std;
#include <iostream>
#include "Queue.h"
#include "Node.h"
#include "TreeNode.h"

template <typename T>
//Adds an item to the end of the queue
void Queue<T>::Enqueue(T* ref)
{
    Node<T>* n = new Node<T>();
    n->data = ref;
    n->next = nullptr;

    if(IsEmpty())
    {
        front = n;
    }
    else
    {
        rear->next = n;
    }
    rear = n;
    size++;
}
template <typename T>
T* Queue<T>::Dequeue()
{
    Node<T>* n = front;
    front = front->next;
    Node<T>* dequeuedNode = new Node<T>;
    dequeuedNode->data = n->data;
    dequeuedNode->next = n->next;
    delete(n);
    size--;
    return dequeuedNode->data;
}
template <typename T>
int Queue<T>::GetSize()
{
    return size;
}
template <typename T>
bool Queue<T>::IsEmpty()
{
    return size == 0;
}
template <typename T>
void Queue<T>::Display()
{
    for(Node<T>* p = front; p != nullptr; p = p->next)
    {
        cout << *p->data << " ";
    }
    cout << "\n";
}
int main()
{

    Queue<int> queue = Queue<int>();
    int num1 = 10;
    int* num1ptr = &num1;

    int num2 = 20;
    int* num2ptr = &num2;

    queue.Enqueue(num1ptr);
    queue.Enqueue(num2ptr);
    queue.Display();
    cout << *queue.Dequeue() << "\n";
    queue.Display();

    return 0;
}


#pragma once


template <typename T>
//Multi-purpose Node meant for use in lists. Can carry a reference of any type.
struct Node
{   
    T* data; //carries the reference to the stored data
    Node<T>* next; //carries the address of the next node
};
// Define the node defination which is basically a Doubly Linked List Node

template <typename T> 

class Node{

    public:

    Node<T>* next;
    Node<T>*prev;

    T key;
    T value;

    Node(T key , T value){
        this->key = key;
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }

};
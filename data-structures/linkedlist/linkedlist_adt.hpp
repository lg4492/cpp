/*
    @Gaurav YadavCS-11 Asn 2, linkedlist_adt.h
    Purpose: Implements Linkedlist class

    @author Gaurav Yadav
    @email gauravyug@gmai.com
    @version 1.1
    @date 13-Oct-18
*/

#ifndef ADT_LINKEDLIST_H_
#define ADT_LINKEDLIST_H_

/*
    Linked List Node
*/
template <class T>
class Node
{
    public:
        T data;
        Node* next;
    public:
        Node(T value);
};
template <class T>
class LinkedList
{
    private:
    Node<T>* head;
    int length;
    public:
    LinkedList<T>();
    ~LinkedList<T>();
    int size() const;
    bool empty() const;
    //void print() const;
    T& at(int index);
    //Node* find(int value) const;
    //bool contains(int value) const;
    void append(T value);
    void prepend(T value);
    void remove(Node<T>* node_ptr); void erase(int index);
};
#endif

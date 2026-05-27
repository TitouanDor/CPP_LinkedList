#include "Node.hpp"
#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

template <typename T>
class LinkedList{
    private:
        Node<T> *head;
    public:
        LinkedList() : head(nullptr) {}

        void add(T value){
            Node<T> *new_node = new Node<T>(value);
            if(this->head == nullptr){
                this->head = new_node;
                return;
            }
            Node<T> *temp = this->head;
            while(temp->hasNext()){
                temp = temp->getNext();
            }
            temp->setNext(new_node);
        }

        const unsigned short size() const{
            unsigned short size = 0;
            Node<T> *temp = this->head;
            while(temp != nullptr){
                ++size;
                temp = temp->getNext();
            }
            return size;
        }

        void remove(){
            if(this->head == nullptr){
                return;
            }
            if (!this->head->hasNext()){
                this->head = nullptr;
                return;
            }

            Node<T> *temp = this->head;
            while(temp->getNext()->hasNext()){
                temp = temp->getNext();
            }
            temp->setNext(nullptr);
        }
};

#endif
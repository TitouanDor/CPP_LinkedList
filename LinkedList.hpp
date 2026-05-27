#include "Node.hpp"
#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

template <typename T>
class LinkedList{
    private:
        Node<T> *head; //head of the linkedList
    public:
        LinkedList() : head(nullptr) {}

        /**
         * Method to add at the end of it a new nbode with the given value
         * 
         * @param value the value of the new node
         */
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

        /**
         * Getter for the size of the linkedList
         * 
         * @return the size of the linkedList
         */
        const unsigned short size() const{
            unsigned short size = 0;
            Node<T> *temp = this->head;
            while(temp != nullptr){
                ++size;
                temp = temp->getNext();
            }
            return size;
        }

        /**
         * Method to remove the last node of the LinkedList
         */
        void removeEnd(){
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

        /**
         * Method to remove the node at the given index of the LinkedList
         * 
         * @param index the index of the node to remove
         */
        void removeAt(unsigned short index){
            if(this->head == nullptr){
                return;
            }
            if (index == 0){
                this->head = this->head->getNext();
                return;
            }

            Node<T> *temp = this->head;
            for (unsigned short i = 0; i < index - 1; ++i){
                if (!temp->hasNext()){
                    return;
                }
                temp = temp->getNext();
            }
            if (!temp->hasNext()){
                return;
            }
            temp->setNext(temp->getNext()->getNext());
        }

        /**
         * Method to remove the first node of the LinkedList with the given value
         * 
         * @param value the value of the node to remove
         */
        void remove(T value){
            if(this->head == nullptr){
                return;
            }
            if (this->head->getValue() == value){
                this->head = this->head->getNext();
                return;
            }

            Node<T> *temp = this->head;
            while(temp->hasNext()){
                if (temp->getNext()->getValue() == value){
                    temp->setNext(temp->getNext()->getNext());
                    return;
                }
                temp = temp->getNext();
            }
        }
};

#endif
#ifndef NODE_HPP
#define NODE_HPP

template<typename T>
class Node{
    private:
        Node *next; //Next node of the LinkedList
        T value; // Value of the node

    public:
        Node() : value(), next(nullptr) {}

        Node(T& val) : value(val), next(nullptr) {}

        /** 
         * Setter for the attribut next
         * 
         * @param node alias of the next node in the linkedlist
        */
        void setNext(Node *node) {
            this->next = node;
        }

        /**
         * Getter for the attribut next
         * 
         * @return alias of the next node in the linkedlist
         */
        Node *getNext(){ 
            return this->next;
        }

        /**
         * Setter for the attribut value
         * 
         * @param value the Value to store into the node
         */
        void setValue(T& value){
            this->value = value;
        }

        /**
         * Getter fot the attribut value
         * 
         * @return the node's value
         */
        T& getValue(){ // & is to say the adress/alias
            return this->value;
        }

        /**
         * Method to know if a node is the last of the LinkedList
         * 
         * @return True if the node isn't the last else False
         */
        const bool hasNext() const { //the first const is to say that the return value cannot be modify, the second one is here to say 'we won't modify the object itself'
            return this->next != nullptr;
        }

};

#endif
#ifndef NODE_HPP
#define NODE_HPP

template<typename T>
class Node{
    private:
        Node *next;
        T value;

    public:
        Node() : value(), next(nullptr) {}

        Node(T& val) : value(val), next(nullptr) {}

        void setNext(Node *node) {
            this->next = node;
        }

        Node *getNext(){ 
            return this->next;
        }

        void setValue(T& val){
            this->value = val;
        }

        T& getValue(){ // & is to say the adress/alias
            return this->value;
        }

        const bool hasNext() const { //the first const is to say that the return value cannot be modify, the second one is here to say 'we won't modify the object itself'
            return this->next != nullptr;
        }

};

#endif
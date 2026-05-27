#ifndef NODE_HPP
#define NODE_HPP

template<typename T>
class Node{
    private:
        Node *next;
        T *value;

    public:
        Node() : value(nullptr), next(nullptr) {}

        Node(T *val) : value(val), next(nullptr) {}

        void setNext(Node *node) {
            this->next = node;
        }

};

#endif
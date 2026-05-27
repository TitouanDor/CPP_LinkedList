#include <iostream>
#include "LinkedList.hpp"

#define LENTGH 8
#define VTYPE float

int main(int argc, char *argv[]){
    LinkedList<VTYPE> *list = new LinkedList<VTYPE>();
    std::cout << "Hello World !" << std::endl;
    for (int i = 0;i<LENTGH;i++){
        list->add(98.f);
        std::cout << list->size() << std::endl;
    }
    for (int i = 0;i<LENTGH;i++){
        list->remove();
        std::cout << list->size() << std::endl;
    }
    
    
    return 0;
}
#include <iostream>
#include "Stack.h"
#include <vector>

template <typename T>
Stack<T>::Stack(){
    elements = std::vector<T>();
}
template <typename T>
size_t Stack<T>::size() const{
    return elements.size();
}
template <typename T>
bool Stack<T>::peek(T& elem) const{
    if(elements.empty()){
        return false;
    }
    else{
        elem = elements[elements.size()-1];
        return true;
    }
}

template <typename T>
bool Stack<T>::pop(T& elem){
    if(elements.empty()){
        return false;
    }
    else{
        elem = elements.back();
        elements.pop_back();
        return true;
    }
}

template <typename T>
void Stack<T>::push(const T& elem){
    elements.push_back(elem);
}
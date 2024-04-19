#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
template <typename T, typename U>
class Pair{
private:
    T first_;
    U second_;
public:
    Pair(T first, U second);
    T get_first() const;
    U get_second() const;
    void show() const;
};

template <typename T, typename U>
Pair<T,U>::Pair(T first, U second){
    first_ = first;
    second_ = second;
}
template <typename T, typename U>
T Pair<T,U>::get_first() const{
    return first_;
}
template <typename T, typename U>
U Pair<T,U>::get_second() const{
    return second_;
}
template <typename T, typename U>
void Pair<T,U>::show() const{
    std::cout << '{' << first_ << ',' << second_ << '}';
}




bool myfunction1(Pair<std::string,int> i ,Pair<std::string,int> j) { 
    return (i.get_first()<j.get_first()); 
}
bool myfunction2(Pair<std::string,int> i ,Pair<std::string,int> j) { 
    return (i.get_second()<j.get_second()); 
}
void sort_by_first(std::vector<Pair<std::string,int>>& v){
    sort(v.begin(), v.end(), myfunction1);
}
void sort_by_second(std::vector<Pair<std::string,int>>& v){
    sort(v.begin(), v.end(), myfunction2);
}

void show(std::vector<Pair<std::string,int>> v ){
    std::cout << '{';
    for(auto& e : v){
        e.show();
    }
    std::cout << '}';
}
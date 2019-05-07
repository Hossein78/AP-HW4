#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <iomanip>

template <typename T>
void Print(std::vector<T> vec);

int main() {
    std::vector<std::string> unique_ptr;
    int capacity{static_cast<int>(unique_ptr.capacity())};
    int size{static_cast<int>(unique_ptr.size())};
    for(int i{0};i<=999;i++){
        std::ostringstream ss;
        ss<<"Str"<<std::setw(3)<<std::setfill('0')<<std::to_string(i);
        unique_ptr.push_back(ss.str());
        if(capacity!=unique_ptr.capacity()){
            capacity= static_cast<int>(unique_ptr.capacity());
            Print(unique_ptr);
    }
    }
    std::cout << std::endl << "this time using Reseve(100)" << std::endl << std::endl;
    std::vector<std::string> unique_ptr2;
    unique_ptr2.reserve(100);
    for(int i{0};i<=999;i++){
        std::ostringstream ss;
        ss<<"Str"<<std::setw(3)<<std::setfill('0')<<std::to_string(i);
        unique_ptr2.push_back(ss.str());
        if(capacity!=unique_ptr2.capacity()){
            capacity= static_cast<int>(unique_ptr2.capacity());
            Print(unique_ptr2);
        }
    }
    return 0;
}

template <typename T>
void Print(std::vector<T> vec){
    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Capacity: " << vec.capacity() << std::endl;
};
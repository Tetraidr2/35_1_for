#include <iostream>
#include <vector>

void zadanie(std::initializer_list<int> list){
    for(auto x : list){
        std::cout << x << std::endl;
    }
}

int main() {
    zadanie({1,2,3,4,5});
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

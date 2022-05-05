#include <memory>
#include <string>
#include <iostream>

int main() {
    // effective c++ the 17th rule: Store newed objects in smart pointers in standalone statements. 
    std::shared_ptr<std::string> name(new string("shared_ptr first demo"));
    std::cout << name.get() << std::endl; 
    return 0;
}

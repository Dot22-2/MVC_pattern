#pragma once
#include <iostream>
class View {
public:
    void display(int data) const {
        std::cout << "Data: " << data << std::endl;
    }
};
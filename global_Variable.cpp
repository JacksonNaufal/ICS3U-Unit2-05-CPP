// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a Global Variable And Local Variable" program with proper style"

#include <iostream>

// The  global variable
int variableX = 25;

void localVariable() {
// This shows what happens when you use local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: "
    << variableX << "+" << variableY << "=" << variableZ << std::endl;
}

    void globalVariable() {
    // this shows what happenes when you use global variables
    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;


    std::cout << "Global variableX, variableY, variableZ: "
    << variableX << "+" << variableY << "=" << variableZ << std::endl;
    }
    int main() {
    // this function calls if its either local and global
localVariable();
globalVariable();
}

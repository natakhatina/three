#include <iostream>
#include <vector>
#include "headers/ClassP.h"
using namespace std;


int main() {
    //std::cout << "Hello, World!" << std::endl;
    Material M("water",1000);
    Info I( M.getName(), M.getP(), 0);
    M.Print1() ;
    I.Print() ;
    return 0;
}
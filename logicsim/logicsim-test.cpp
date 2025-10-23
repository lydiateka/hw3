#include "circuit.h"
#include "wire.h"
#include "gate.h"
#include "event.h"
#include <iostream>

using namespace std; 
int main() { 
    Circuit c; 

    c.NotTest();
    c.startUml(std::cout); 
    c.run(std::cout); 
    c.endUml(std::cout); 

    return 0; 
}
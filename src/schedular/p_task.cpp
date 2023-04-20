#include "p_task.h"
#include <iostream>

p_task::p_task(std::uint8_t _delay, 
            std::uint8_t _capacity, 
            std::uint8_t _start, 
            std::uint8_t _period)  : task(_delay, _capacity, _start) {
                this->_period = _period; 
            }

void p_task::change_state(utils::state _state) {
    std::cout << "Changine state... \n"; 
}

p_task::~p_task(){
    // No job was assigned
}
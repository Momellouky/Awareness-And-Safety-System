#include "p_task.h"
#include <iostream>

p_task::p_task(std::uint8_t _delay, 
            std::uint8_t _capacity, 
            std::uint8_t _start, 
            std::uint8_t _period)  : task(_delay, _capacity, _start) {
                this->_period = _period; 
            }

void p_task::change_state(utils::state _state) {
    if(this->_state == _state){
        throw utils::invalid_switch_state_exception("FAILED TO CHANGE STATE. IT WAS THE SAME STATE!!!"); 
    }
    this->_state = _state; 
}

p_task::~p_task(){
    // No job was assigned
}
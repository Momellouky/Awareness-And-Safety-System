#include "task.h"

task::task(std::uint8_t _delay, 
            std::uint8_t _capacity, 
            std::uint8_t _start){
    // we need to generate the id of the task. 
    // This functionality will be implement in future commits
    // This comment will be deleted once the id generator is implemented
    this->_delay = _delay; 
    this->_capacity = _delay; 
    this->_start = _start; 
    this->_time_in_proc = 0; 
    this->_state = utils::READY; 
}

task::~task(){
    // No job was assigned.    
}
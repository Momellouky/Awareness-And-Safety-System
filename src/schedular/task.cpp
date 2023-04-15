#include "task.h"

#define id_type std::uint8_t

task::task(std::uint8_t _delay, 
            std::uint8_t _capacity, 
            std::uint8_t _start){
    task::generate_id(this->_id); 
    this->_delay = _delay; 
    this->_capacity = _delay; 
    this->_start = _start; 
    this->_time_in_proc = 0; 
    this->_state = utils::READY; 
}

/// @warning THIS IS TEMP IMPLEMENTATION OF THIS METHOD
/// LOOKING FOR A CLEVER WAY TO GENERATE UNIQUE IDs 
/// WITHOUT THE USE OF EXTERNAL LIBRARIES
static void generate_id(std::string& _id){
    static id_type id = 0; 
    _id = std::to_string(id);
}

task::~task(){
    // No job was assigned.    
}
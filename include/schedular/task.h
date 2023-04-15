#ifndef TASK_H
#define TASK 

#include <string>
#include "utils/utils.h"

class task {
    public: 
        /// @brief Constructor. Initialize a task with 
        /// user defined params. 
        /// However, the id is auto-generated. 
        /// time spent in the processing unit is null
        /// and the state is READY
        /// @param _delay : task delay. An upper bound of 
        /// response time.
        /// @param _capacity : Task capacity. Time of execution.
        /// @param _start : Time at which the task became 
        /// a candidate to get processor.
        task(std::uint8_t _delay, 
            std::uint8_t _capacity, 
            std::uint8_t _start); 

        /// @brief change the state of the task. 
        /// @param _state : The task should pass to this state.
        /// @throws invalid_swich_state_exception : when the _state 
        /// param is equal to the current state. 
        virtual void change_state(utils::state _state) = 0; 

        /// @brief generates an id for each task
        /// @param id : a reference to task's id 
        /// This function takes a reference to task's id to avoid 
        /// copying data caused by return value. 
        static void generate_id(std::string& _id); 

        ~task(); // Currently is public 
                // In the future. Make a kill() function to kill a task
    private:
        /// @brief task id
        std::string _id;
        /// @brief task delay. An upper bound of 
        /// response time.  
        std::uint8_t _delay; // Currently is set to uint_8. 
                            // In the future, it may have a date datatype (to express its value in ms).  
        /// @brief task capacity
        std::uint8_t _capacity; 
        /// @brief Time at which the task starts working
        std::uint8_t _start; 
        /// @brief The time spent in the processor. 
        std::uint8_t _time_in_proc; 
        /// @brief The state of task
        utils::state _state; 

}; 

#endif
#ifndef P_TASK_H
#define P_TASK_H

#include "./task.h"
class p_task : public task {

public : 
        /// @brief constructor of the period task. It calls the super-class constructor. 
        /// @param _delay 
        /// @param _capacity 
        /// @param _start 
        /// @param _period 
        p_task(std::uint8_t _delay, 
                std::uint8_t _capacity, 
                std::uint8_t _start, 
                std::uint8_t _period); 

        /// @brief change the state of the task. 
        /// @param _state : The task should pass to this state.
        /// @throws invalid_swich_state_exception : when the _state 
        /// param is equal to the current state. 
        void change_state(utils::state _state) override; 

        ~p_task(); 
private: 
        /// @brief The period of the task. It determines the frequency 
        /// in which the task runs
        std::uint8_t _period; 
}; 

#endif 
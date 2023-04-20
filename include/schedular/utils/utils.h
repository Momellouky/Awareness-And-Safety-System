#ifndef UTILS_H 
#define UTILS_H 

namespace utils {
    enum state {
        ACTIVE, 
        READY, 
        BLOCKED
    }; 

    class invalid_switch_state_exception : public std::exception {

        public:
            invalid_switch_state_exception(const char* _message) : 
                _message(_message) {}
            virtual const char* what() const noexcept override {
                return _message;
            }
        private: 
            const char* _message; 
    }; 
}; 

#endif 
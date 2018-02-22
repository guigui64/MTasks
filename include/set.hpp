#ifndef MTASKS_SET_HPP
#define MTASKS_SET_HPP

#include <string>
#include <fstream>
#include <vector>

#include "task.hpp"

class Set {
    public:
        Set(std::string name): m_name(name) {}
        virtual ~Set() {}
        virtual void write(std::ofstream &s);
    private:
        std::string m_name;
        std::vector<Task> tasks;
};

#endif // MTASKS_SET_HPP

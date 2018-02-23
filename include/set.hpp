#ifndef MTASKS_SET_HPP
#define MTASKS_SET_HPP

#include <string>
#include <fstream>
#include <vector>

class Task;

class Set {
    public:
        Set(std::string name): m_name(name) {}
        virtual ~Set() {}
        virtual void write(std::ofstream &s);
        std::vector<Task> const &getTasks() const { return tasks; }
        void addTask(Task t);
        void deleteTask(int id);
    private:
        std::string m_name;
        std::vector<Task> tasks;
};

#endif // MTASKS_SET_HPP

#ifndef MTASKS_TASK_HPP
#define MTASKS_TASK_HPP

#include <string>
#include <ctime>
#include <ostream>
#include <fstream>

class Task {
    public:
        Task(std::string name, std::string notes, time_t creationTime, time_t deadline): m_id(sid++), m_name(name), m_notes(notes), m_deadline(deadline), m_creationTime(creationTime) {}
        virtual ~Task() {}
        virtual void print(std::ostream &s);
        virtual void write(std::ofstream &s);
        static int sid;
    private:
        int m_id;
        std::string m_name, m_notes;
        time_t m_deadline, m_creationTime;
};

#endif // MTASKS_TASK_HPP

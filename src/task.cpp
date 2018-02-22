#include "task.hpp"

using namespace std;

int Task::sid = 0;

void Task::print(ostream &s) {
    s << "Task id: " << m_id << " name: " << m_name << " created: " << ctime(&m_creationTime);
    s << "Deadline: " << ctime(&m_deadline);
    s << "Notes:" << endl << "---" << endl << m_notes << endl << "---" << endl;
}

void Task::write(ofstream &s) {
    // TODO separator ?
    s << m_id << m_name << ctime(&m_creationTime) << ctime(&m_deadline) << m_notes;
}

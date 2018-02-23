#include "set.hpp"
#include "task.hpp"

using namespace std;

void Set::write(ofstream &s) {
    s << Task::sid;
    for (auto task : tasks) {
        // TODO separator ?
        task.write(s);
    }
}

void Set::deleteTask(int id) {
    // TODO
}

void Set::addTask(Task t) {
    tasks.push_back(t);
}

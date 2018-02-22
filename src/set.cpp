#include "set.hpp"

using namespace std;

void Set::write(ofstream &s) {
    s << Task::sid;
    for (auto task : tasks) {
        // TODO separator ?
        task.write(s);
    }
}

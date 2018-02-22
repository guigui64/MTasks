#include <iostream>

#include "task.hpp"

int main(int argc, char * const argv[]) {
    // TODO getopt
    time_t now = time(nullptr);
    Task task("test task", "test notes of test task\n\ntoto", now, now + 2*24*60*60);
    task.print(std::cout);
    now = time(nullptr);
    task = Task("test task 2", "test notes 2 of test task 2 \n\ntoto 2", now, now + 2*24*60*60);
    task.print(std::cout);
}

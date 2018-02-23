#include <iostream>
#include <getopt.h>

#include "task.hpp"
#include "set.hpp"

// Flag set by ‘--verbose’
static int verbose_flag = 0;

int main(int argc, char * const argv[]) {

    int c;
    time_t now = time(nullptr);
    Set set("set");

    while (true) {
        static struct option long_options[] = {
            {"verbose",     no_argument,        &verbose_flag,  1},
            {"create",      no_argument,        0,              'c'},
            {"list",        no_argument,        0,              'l'},
            {"delete",      required_argument,  0,              'd'},
            {0, 0, 0, 0}
        };

        int option_index = 0;
        c = getopt_long(argc, argv, "acld:", long_options, &option_index);

        if (c == -1) {
            break;
        }

        switch (c) {
            case 'c': {
                          Task task("test task", "test notes of test task\n\ntoto", now, now + 2*24*60*60);
                          set.addTask(task);
                          break;
                      }
            case 'l':
                      for (auto t : set.getTasks()) {
                          t.print(std::cout);
                      }
                      break;
        }

    }

}

#include <stdio.h>

enum task_options
{
    add,
    delete,
    end,
    edit
};

/*
 * There are main tabs:
 *      1. Show Today Tasks
 *      2. Deleted Tasks
 *      3. Done Tasks
 *      4. Show All Saved Tasks
 */

// add task whether timeless or not
void addTask() {}
// to the garbage
void deleteTask() {}
// to the done tasks
void endTask() {}
// show tasks of specific day
void showTasks() {}
// change task settings
void editTasks() {}

int main(void)
{
    printf("Hello, World!\n");
    return 0;
}

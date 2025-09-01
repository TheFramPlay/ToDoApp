/**
* Author: Harley Garcia
* Date: 8/31/2025
* Purpose: Define ToDoItem Struct that will hold data for each to-do
*         item.
*/

#ifndef TODOAPP_TODOITEM_H
#define TODOAPP_TODOITEM_H

#include <string>
using namespace std;

struct ToDoItem {
    int id;             // Unique identifier for the item
    string title;       // Title of the to-do item
    string description; // Brief description of the task
    string timestamp;   // When the item was created
    string priority;    // Priority level (low/medium/high)
};

#endif //TODOAPP_TODOITEM_H
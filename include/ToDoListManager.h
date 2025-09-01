/**
 * Author: Harley Garcia
 * Date: 8/31/2025
 * Purpose: Declares ToDoListManager class to manage the vector of
 *      to-do items and function prototypes for utility functions.
 */

#ifndef TODOAPP_TODOLISTMANAGER_H
#define TODOAPP_TODOLISTMANAGER_H

#include <vector>
#include <string>
#include "ToDoItem.h"
using namespace std;

class ToDoListManager {
private:
    vector<ToDoItem> todoList; // Vector to Store to-do items
    int nextId;     // Tracks next available ID
public:
    ToDoListManager(); // Constructor
    void addItem(const string& title, const string& description, const string& priority);
    void deleteItem(int id);
    void clearList();
    void printList() const;
};

// Function prototype for timestamp
string getCurrentTimestamp();

#endif //TODOAPP_TODOLISTMANAGER_H
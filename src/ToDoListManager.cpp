/**
* Author: Harley Garcia
* Date: 8/31/2025
* Purpose: Implements ToDoListManager class methods and
*       getCurrentTimestamp function.
*/

#include "../include/ToDoListManager.h"
#include <iostream>
#include <ctime>

using namespace std;

// Constructor initializes nextId
ToDoListManager::ToDoListManager() : nextId(1) {}

// Adds a new to-do item with user-provided title, description, and priority
void ToDoListManager::addItem(const string& title, const string& description, const string& priority) {
    ToDoItem newItem;
    newItem.id = nextId++;
    newItem.title = title;
    newItem.description = description;
    newItem.priority = priority;
    newItem.timestamp = getCurrentTimestamp();
    todoList.push_back(newItem);
    cout << "To-Do item added successfully!\n";
}

// Deletes an item by ID
void ToDoListManager::deleteItem(int id) {
    if (todoList.empty()) {
        cout << "No to-do items to delete.\n";
        return;
    }
    bool found = false;
    for (auto it = todoList.begin(); it != todoList.end(); ++it) {
        if (it->id == id) {
            todoList.erase(it);
            cout << "To-Do item deleted successfully!\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item with ID " << id << " not found.\n";
    }
}

// Clears all items and resets ID counter
void ToDoListManager::clearList() {
    if (todoList.empty()) {
        cout << "To-Do list is already empty.\n";
    } else {
        todoList.clear();
        nextId = 1;
        cout << "To-Do list cleared successfully!\n";
    }
}

// Prints all to-do items
void ToDoListManager::printList() const {
    if (todoList.empty()) {
        cout << "No to-do items to display.\n";
    } else {
        cout << "\n=== To-Do Items ===\n";
        for (const auto& item : todoList) { // Range-based for loop
            cout << "ID: " << item.id << "\n";
            cout << "Title: " << item.title << "\n";
            cout << "Description: " << item.description << "\n";
            cout << "Priority: " << item.priority << "\n";
            cout << "Created: " << item.timestamp << "\n";
            cout << "----------------------\n";
        }
    }
}

// Return current timestamp as a string
string getCurrentTimestamp() {
    time_t now = time(nullptr);
    string timestamp = ctime(&now);
    timestamp.pop_back(); // Remove trailing newline
    return timestamp;
}



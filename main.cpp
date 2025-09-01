/**
* Author: Harley Garcia
* Date: 8/31/2025
* Purpose: Define ToDoItem Struct that will hold data for each to-do
*         item.
*/
#include <iostream>
#include <string>
#include "./include/ToDoListManager.h"

using std::cin;
using std::cout;
using std:: getline;
using std:: string;

int main() {
    ToDoListManager manager; //Create manager instance
    char choice; // User's menu selection

    do {
        // Display menu with some formatting.
        cout << "\n=== To-Do List Manager ===\n";
        cout << "1. View To-Do List\n";
        cout << "2. Add To-Do Item\n";
        cout << "3. Delete To-Do List\n";
        cout << "4. Clear To-Do List\n";
        cout << "5. Exit To-Do List Manager\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore(); // Clear newline from input buffer

        switch (choice) {
            case '1':
                manager.printList();
                break;
            case '2': {
                string title, description, priority;
                cout << "Enter title: ";
                getline(cin, title);
                cout << "Enter description: ";
                getline(cin, description);
                cout << "Enter priority (Low/Medium/High): ";
                getline(cin, priority);
                manager.addItem(title, description, priority);
                break;
            }
            case '3': {
                int deleteId;
                cout << "Enter the ID of the item to delete: ";
                cin >> deleteId;
                cin.ignore();
                manager.deleteItem(deleteId);
                break;
            }
            case '4':
                manager.clearList();
                break;
            case '5':
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter 1-5\n";
        }
    } while (choice != '5');
    return 0;
}
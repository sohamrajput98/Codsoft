#codsoft
#include <iostream>
#include <vector>
using namespace std;

struct Task {
    string description;
    bool isCompleted;

    Task(string desc) {
        description = desc;
        isCompleted = false;
    }
};

vector<Task> tasks;

void addTask() {
    string desc;
    cout << "Enter task description: ";
    cin.ignore();
    getline(cin, desc);
    tasks.push_back(Task(desc));
    cout << "Task added!\n";
}

void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }
    cout << "\nYour Tasks:\n";
    for (int i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << (tasks[i].isCompleted ? "[✓] " : "[ ] ") << tasks[i].description << "\n";
    }
}

void markTaskCompleted() {
    int index;
    viewTasks();
    cout << "Enter task number to mark as completed: ";
    cin >> index;
    if (index >= 1 && index <= tasks.size()) {
        tasks[index - 1].isCompleted = true;
        cout << "Task marked as completed.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

void removeTask() {
    int index;
    viewTasks();
    cout << "Enter task number to remove: ";
    cin >> index;
    if (index >= 1 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed.\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\n=== TO-DO LIST MENU ===\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: markTaskCompleted(); break;
            case 4: removeTask(); break;
            case 5: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}

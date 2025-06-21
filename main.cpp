#include <iostream>
#include <string>
#include "StudentManager.h"

int main() {
    studentManager manager;
    manager.loadFromFile("students.txt");

    int choice;
    do {
        std::cout << "\n--- Student Manager ---\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Find Student by ID\n";
        std::cout << "3. Print All Students\n";
        std::cout << "4. Remove Student by ID\n";
        std::cout << "5. Save and Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string id, name;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Name: ";
            std::cin.ignore(); // כדי לקרוא שורת טקסט אחרי cin
            std::getline(std::cin, name);
            student s(id, name);
            manager.addStudent(s);
            std::cout << "Student added successfully.\n";

        } else if (choice == 2) {
            std::string id;
            std::cout << "Enter ID to search: ";
            std::cin >> id;
            student* s = manager.findStudent(id);
            if (s) {
                s->print();
            } else {
                std::cout << "Student not found.\n";
            }

        } else if (choice == 3) {
            manager.printAll();

        } else if (choice == 4) {
            std::string id;
            std::cout << "Enter ID to remove: ";
            std::cin >> id;
            manager.removeStudent(id);
            std::cout << "Student removed (if existed).\n";

        } else if (choice == 5) {
            manager.saveToFile("students.txt");
            std::cout << "Data saved. Exiting...\n";

        } else {
            std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}


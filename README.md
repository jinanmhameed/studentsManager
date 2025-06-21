# Student Records Manager (C++)

A simple console-based C++ application to manage student records.  
This project demonstrates object-oriented design, file I/O, and user interaction via a text-based menu.

---

## ✨ Features

- Add new students with ID and name.
- Find student by ID and view their info.
- Delete a student by ID.
- Print all students.
- Save/load student data to/from a file (`students.txt`).

---

## 🛠 Technologies

- Language: C++
- Concepts used:
  - Classes & OOP
  - Vectors (`std::vector`)
  - File I/O (`ifstream`, `ofstream`)
  - Lambda expressions
  - Menus via `std::cin`/`std::cout`

---

## 🚀 How to Compile and Run

### 📦 Using g++ on Windows:
```bash
g++ main.cpp Student.cpp StudentManager.cpp -o student-manager.exe
.\student-manager.exe



#include "studentmanager.h"
#include <iostream>
#include <fstream>
#include <algorithm>

studentManager::studentManager(){};

void studentManager::addStudent(const student& student){
    this->students.push_back(student);
};

void studentManager::removeStudent(std::string id){
    this->students.erase(std::remove_if(this->students.begin(), this->students.end(), [&id](student student){return student.getID() == id;}), this->students.end());
}

 void studentManager::printAll() const{
     for (student student : this->students){
         student.print();
     }
 }

 student* studentManager::findStudent(std::string id){
    for(auto& student : this->students){
        if (student.getID() == id){
            return &student;
        }
    }
    return nullptr;
 }

 void studentManager::saveToFile(std::string filename) const{
     std::ofstream file(filename);
     for (student student : this->students){
         file << student.getID() << " " << student.getName() << " " << student.getAverage() << std::endl;
     }
     file.close();
 }

 void studentManager::loadFromFile(std::string filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        size_t comma = line.find(',');
        if (comma != std::string::npos) {
            std::string id = line.substr(0, comma);
            std::string name = line.substr(comma + 1);
            students.push_back(student(id, name));
        }
    }
}

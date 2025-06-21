#include "student.h"
#include <iostream>
#include <numeric>

student::student(string id, string name)
{
    this->id = id;
    this->name = name;
}
void student::addGrade(int grade)
{
    this->scores.push_back(grade);
}

double student::getAverage() const
{
    double sum = 0;
    for (int i = 0; i <= this->scores.size() - 1; i++)
    {
        sum += this->scores[i];
    }
    return sum / this->scores.size();
}

void student::print() const{
    std::cout << "ID: " << this->id << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Average: " << this->getAverage() << std::endl;
}

string student::getID() const{
    return this->id;
}
string student::getName() const{
    return this->name;
}

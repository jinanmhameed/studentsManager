#include "student.h"
#include <vector>

class studentManager
{
    private:
        std::vector<student> students;
    public:
    void addStudent(const student& student);
    void removeStudent(std::string id);
    void printAll() const;
    student* findStudent(std::string id);
    void saveToFile(std::string filename) const;
    void loadFromFile(std::string filename);
};

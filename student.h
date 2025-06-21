#include <string>
#include <vector>

using std::string;

class student{

    private:
    string id;
    string name;
    std::vector<int> scores;

    public:
    student(string id, string name);
    void addGrade(int grade);
    double getAverage() const;
    void print() const;
    string getID() const;
    string getName() const;
};

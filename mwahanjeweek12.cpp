
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*COURSE CLASS*/
class Course
{
private:
    string courseCode;
    string courseTitle;

public:
    Course(string code, string title)
    {
        courseCode = code;
        courseTitle = title;
    }

    string getCode() const
    {
        return courseCode;
    }

    string getTitle() const
    {
        return courseTitle;
    }
};

/*STUDENT CLASS*/
class Student
{
private:
    string regNo;
    string name;
    vector<Course> registeredCourses;

public:
    Student(string r, string n)
    {
        regNo = r;
        name = n;
    }

    string getName() const
    {
        return name;
    }

    // Dependency: Student depends on Course when registering
    void registerCourse(Course c)
    {
        registeredCourses.push_back(c);
        cout << name << " registered for " << c.getTitle() << endl;
    }

    void showCourses()
    {
        cout << "\nCourses registered by " << name << ":\n";
        for (Course c : registeredCourses)
        {
            cout << "- " << c.getCode() << " : " << c.getTitle() << endl;
        }
    }
};

/* DEPARTMENT CLASS*/
class Department
{
private:
    string deptName;
    vector<Student> students;

public:
    Department(string name)
    {
        deptName = name;
    }

    //Association: Department has Students
    void addStudent(Student s)
    {
        students.push_back(s);
        cout << s.getName() << " added to " << deptName << " Department.\n";
    }

    void listStudents()
    {
        cout << "\nStudents in " << deptName << " Department:\n";
        for (Student s : students)
        {
            cout << "- " << s.getName() << endl;
        }
    }
};

/*MAIN PROGRAM*/
int main()
{
    // Create Department
    Department dept("Computer Science");

    // Create Students
    Student s1("CIT001", "Alex");
    Student s2("CIT002", "");

    // Add students to department (Association)
    dept.addStudent(s1);
    dept.addStudent(s2);

    // Create Courses
    Course c1("CIT2210", "Object Oriented Programming");
    Course c2("CIT2205", "Data Structures");

    // Students register courses (Dependency)
    s1.registerCourse(c1);
    s1.registerCourse(c2);

    s2.registerCourse(c1);

    // Display registered courses
    s1.showCourses();
    s2.showCourses();

    // Display department students
    dept.listStudents();

    return 0;
}



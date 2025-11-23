#include <iostream>
using namespace std;

int main() {
    string name = "my roomate's name is #include <iostream>

class Roommate {
public:
    string name;
    int age;
    string home;
    string school;
    string family;
    vector<string> hobbies;

 {
        cout << "Roommate Information:" << endl;
        cout << "---------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years old" << endl;
        cout << "Home: " << home << endl;
        cout << "School: " << school << endl;
        cout << "Family: " << family << endl;
        cout << "Hobbies: ";
        for (size_t i = 0; i < hobbies.size(); i++) {
            cout << hobbies[i];
            if (i != hobbies.size() - 1) cout << ", ";
        }
        cout << endl;
    }

int main() {
    Roommate rm;

    rm.name = "John Doe";
    rm.age = 22;
    rm.home = "Nairobi, Kenya";
    rm.school = "Juja University";
    rm.family = "Lives with parents and two siblings";
    rm.hobbies = {"Football", "Reading", "Coding", "Music"};

    return 0;
}

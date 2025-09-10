#include <iostream>
#include <vector>
#include <string>
using namespace std;


// Student Class

class Student {
public:
    int id; 
    string name;
    string department;

    Student ( int id, string name, string dept ) {
        this -> id = id;
        this -> name = name;
        this -> department = dept;
    }

    void display () {
        cout << "ID : " << id << " | Name : " << name << " | Department : " << department << endl;
    }
};

// Faculty Class

class Faculty {
public:
    int id;
    string name;
    string subject;

    Faculty ( int id, string name, string subject ) {
        this -> id = id;
        this -> name = name;
        this -> subject = subject;
    }

    void display () {
        cout << "ID : " << id << " | Name : " << name << " | Subject : " << subject << endl;
    }
};

// Course Class

class Course {
public:
    string code;
    string title;

    Course ( string code, string title ) {
        this -> code = code;
        this -> title = title;
    }

    void display () {
        cout << "Course Code : " << code << " | Title : " << title << endl;
    }
};

// Admin Class

class Admin {
private:
    string username = "Sameer";
    string password = "1234";

    vector<Student> students;
    vector<Faculty> faculties;
    vector<Course> courses;

public:
    bool login () {
        string user, pass;
        cout << "Admin Username: ";
        cin >> user;
        cout << "Admin Password: ";
        cin >> pass;

        if ( user == username && pass == password ) {
            cout << "Login successful" << endl;
            return true;
        } 
        
        else {
            cout << "Invalid username or password." << endl;
            return false;
        }
    }

    void showMenu () {
        string choice;

        while ( true ) {
            cout << "\n======= Admin Menu =======" << endl;
            cout << " 1. add_student     - Add a new student" << endl;
            cout << " 2. view_students   - View all students" << endl;
            cout << " 3. add_faculty     - Add a new faculty member" << endl;
            cout << " 4. view_faculties  - View all faculty members" << endl;
            cout << " 5. add_course      - Add a new course" << endl;
            cout << " 6. view_courses    - View all courses" << endl;
            cout << " 7. exit            - Exit admin panel" << endl;

            cout << "Enter command : ";
            cin >> choice;

            if ( choice == "add_student" ) {
                addStudent ();
            } 
            
            else if ( choice == "view_students" ) {
                viewStudents ();
            } 
            
            else if ( choice == "add_faculty" ) {
                addFaculty ();
            } 
            
            else if ( choice == "view_faculties" ) {
                viewFaculties ();
            } 
            
            else if ( choice == "add_course" ) {
                addCourse ();
            } 
            
            else if ( choice == "view_courses" ) {
                viewCourses ();
            } 
            
            else if ( choice == "exit" ) {
                cout << "Exiting admin panel..." << endl;
                break;

            } 
            
            else {
                cout << "Invalid command. Try again." << endl;
            }

        }
    }

    void addStudent () {
        cout << endl;
        int id;
        string name, dept;

        cout << "Enter Student ID : ";
        cin >> id;
        cin.ignore ();
        cout << "Enter Student Name : ";
        getline ( cin, name );
        cout << "Enter Department: ";
        getline( cin, dept );

        Student s ( id, name, dept );
        students.push_back ( s );
        cout << "Student added.\n";
    }

    void viewStudents () {
        cout << endl;
        cout << "--- Student List ---" << endl;;
        for ( Student &s : students ) {
            s.display ();
        }
    }

    void addFaculty () {
        cout << endl;
        int id;
        string name, subject;

        cout << "Enter Faculty ID : ";
        cin >> id;
        cin.ignore ();
        cout << "Enter Faculty Name : ";
        getline ( cin, name );
        cout << "Enter Subject : ";
        getline ( cin, subject );

        Faculty f ( id, name, subject );
        faculties.push_back ( f );
        cout << "Faculty added" << endl;
    }

    void viewFaculties () {
        cout << endl;
        cout << "--- Faculty List ---" << endl;
        for ( Faculty &f : faculties ) {
            f.display();
        }
    }

    void addCourse () {
        cout << endl;
        string code, title;

        cout << "Enter Course Code : ";
        cin >> code;
        cin.ignore ();
        cout << "Enter Course Title : ";
        getline ( cin, title );

        Course c ( code, title );
        courses.push_back ( c );
        cout << "Course added" << endl;
    }

    void viewCourses () {
        cout << endl;
        cout << "--- Course List ---" << endl;
        for ( Course &c : courses ) {
            c.display ();
        }
    }
};

// Main Function

int main () {
    Admin admin;

    if ( admin.login() ) {
        admin.showMenu ();
    }

    return 0;
}

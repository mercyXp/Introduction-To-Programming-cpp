# C++ Structures (struct) - A Beginner's Guide

## What is a Structure (struct) in C++?

In C++, a **structure** (often referred to as a `struct`) is a way to group different pieces of data together. Think of a structure as a "box" where you can store multiple types of related information.

- **Structure** allows you to group related data.
- Each piece of data inside the structure is called a **member** or **field**.
- A structure can hold **different types of data** (like numbers, text, etc.).

### Real-Life Example:

Imagine you have a **student**:
1. **Name** (text)
2. **Age** (number)
3. **Grade** (number)

All of these belong together, so we create a structure to store them in one place.

## Basic Structure Syntax

Here’s how to define and use a basic structure in C++:

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;  // Name of the student
    int age;      // Age of the student
    float grade;  // Grade of the student
};

int main() {
    Student student1;  // Creating a variable of type 'Student'
    
    // Assign values to the members of 'student1'
    student1.name = "Alice";
    student1.age = 10;
    student1.grade = 95.5;

    // Print the student's details
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Grade: " << student1.grade << endl;

    return 0;
}
```
## Explanation:

- **Define a Structure**: We define a `struct Student` with fields: `name`, `age`, and `grade`.
- **Create a Structure Variable**: In `main()`, we create a variable `student1` of type `Student`.
- **Assign Values**: We assign values to the structure members.
- **Print Values**: We print the values stored in `student1`.

## Task 1: Define a structure for a Book

Create a structure called `Book` with the following fields:
- `title` (a string)
- `author` (a string)
- `price` (a float)

Write a program that asks the user to input the title, author, and price of a book, then displays that information.

---

## Advanced Concepts

### 1. Accessing Structure Members Using Pointers

You can also use **pointers** to access structure members. A pointer "points" to the memory location where the structure is stored.

### Example Code:

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float grade;
};

int main() {
    Student student1;
    Student* ptr = &student1;  // Pointer to the structure variable

    // Assign values using the pointer
    ptr->name = "Bob";
    ptr->age = 12;
    ptr->grade = 88.0;

    // Print values using the pointer
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
    cout << "Grade: " << ptr->grade << endl;

    return 0;
}
```
## Explanation:
- **Pointer to Structure**: *Student* ptr is a pointer to a Student structure.
- **Using Pointer to Access Members**: Use the `-> `operator to access members of the structure through a pointer.

## Task 2: Use Pointers with a Structure
Write a program that uses a pointer to access the members of the Student structure and prints the student's details.

### 2. Passing Structures to Functions
Structures can be passed to functions in C++. You can pass them by value (copy) or reference (using the original).

#### Passing by Value
When a structure is passed by value, a copy is made, and changes made inside the function will not affect the original structure.

```cpp
void printStudent(Student student) {
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Grade: " << student.grade << endl;
}

int main() {
    Student student1 = {"Charlie", 13, 90.0};
    printStudent(student1);
    return 0;
}
```
#### Passing by Reference
When a structure is passed by reference, you are directly passing the original structure, and changes inside the function will affect the original structure.

```cpp
void modifyGrade(Student &student) {
    student.grade = 100.0;  // Modifies the original structure
}

int main() {
    Student student1 = {"Charlie", 13, 90.0};
    modifyGrade(student1);  // Grade will be modified
    cout << "New Grade: " << student1.grade << endl;
    return 0;
}
```
## Task 3: Passing Structures to Functions
Create a structure Student with name, age, and grade.
Write a function to modify the grade of a student by passing the structure by reference.
Print the updated grade in the main() function.
### 3. Arrays of Structures
You can create an array of structures to store multiple objects of the same type. This is useful when managing more than one structure.

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float grade;
};

int main() {
    Student students[3];  // Create an array of 3 students

    // Assign values to the array of structures
    students[0].name = "John";
    students[0].age = 14;
    students[0].grade = 92.0;

    students[1].name = "Emma";
    students[1].age = 15;
    students[1].grade = 88.5;

    students[2].name = "Lucas";
    students[2].age = 13;
    students[2].grade = 95.3;

    // Display details of all students
    for (int i = 0; i < 3; i++) {
        cout << "Student " << (i+1) << ": " << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Grade: " << students[i].grade << endl;
        cout << "-------------------------" << endl;
    }

    return 0;
}
```
## Task 4: Arrays of Structures
Create an array of structures to hold information for 5 books (title, author, price).
Write a program that asks the user to input information for all 5 books and then displays that information.

### Advanced Task: Structure with Nested Structures
A structure can contain other structures. This is called a nested structure.

Example:

```cpp
struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    string name;
    Date date;  // Nested structure
};

int main() {
    Event event1;
    event1.name = "Birthday Party";
    event1.date.day = 12;
    event1.date.month = 10;
    event1.date.year = 2025;

    cout << "Event: " << event1.name << endl;
    cout << "Date: " << event1.date.day << "/" << event1.date.month << "/" << event1.date.year << endl;

    return 0;
}
```
## Task 5: Nested Structures
Create a structure called Book that contains:

title (string)
author (string)
publicationDate (another structure Date with day, month, and year)
Write a program that asks the user to input the details of a book and prints them.

# Conclusion
In this guide, you’ve learned about:

- Basic Structures: How to define and use structures.
- Pointers with Structures: How to use pointers to access structure members.
- Passing Structures to Functions: How to pass structures by value and by reference.
- Arrays of Structures: How to use arrays to store multiple structures.
- Nested Structures: How structures can contain other structures.

---
---
`Happy Coding!`
Good luck, and have fun practicing with structures in C++!
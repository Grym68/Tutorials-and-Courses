#include <stdio.h>
#include <string.h>
typedef struct
{
    /* data */

    char name[50];
    int number;
    int age;
} student;

typedef struct {
    int id;
    char title[40];
    float hours;
} course;

void showStudentData(student* st) {
    printf("\nStudent:\n");
    printf("Name: %s\n", st->name);
    printf("Number: %d\n", st->number);
    printf("Age: %d\n", st->age);
}

void updateCourse(course* class) {
    strcpy_s(class->title,40, "C++ Fundamentals");
    class->id = 11;
    class->hours = 12.30;
}

void displayCourse(course class) {
    printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);
}

int main() {
    student st1;
    student st2;

    // Populating students

    st1 = (student) {"Krishna", 5, 21};
    st2 = (student) {"Max", 9, 15};

    // Displaying student details
    showStudentData(&st1);
    showStudentData(&st2);

    course cs1;
    updateCourse(&cs1);
    displayCourse(cs1);

    return 0;
}

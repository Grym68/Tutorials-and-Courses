#include <stdio.h>
#include <string.h>

struct course {
    int id;
    char title[40];
    float hours;
};

struct student {
    int age;
    int grade;
    char name[40];
};

int main() {
    /* declare two variables*/

    /* Declaring then populating each field
    struct student s1;
    struct student s2;

    s1.age = 19;
    s1.grade = 9;
    sprintf(s1.name, "John Bighimer");

    s2.age = 22;
    s2.grade = 10;
    sprintf(s2.name, "Batman Jokerson");
    */


    // Declaring and populating using the constructor

    struct student s1 = { 19, 9, "John" };
    struct student s2 = { 22, 10 , "Batman Jokerson" };



    /* Declaring then populating using the constructor and by type casting

    struct student s1;
    s1 = (struct student) {19, 9, "John"};
    struct student s2;
    s2 = (struct student) {22, 10, "Batman Jokerson"};
    */

    /* populating using the named member initialization

    struct student s1 = { .grade = 9, .age = 19, .name = "John"};
    struct student s2 = { .name = "Batman Jokerson", .age = 22, .grade = 10};
    */


    printf("Student: %s, %d\n", s1.name, s1.age);
    printf("Student: %s, %d\n", s2.name, s2.age);


    // #### COURSES ####

    struct course cs1 = { 341279, "Intro to C++", 12.5 };
    struct course cs2;

    // initialize cs2
    cs2.id = 341281;
    strcpy_s(cs2.title,40, "Advanced C++");
    cs2.hours = 14.25;

    // display course info
    printf("%d\t%s\t%4.2f\n", cs1.id, cs1.title, cs1.hours);
    printf("%d\t%s\t%4.2f\n", cs2.id, cs2.title, cs2.hours);

    return 0;
}
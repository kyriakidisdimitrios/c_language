// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <stdbool.h>
//
// typedef struct student {
//     char name[50]; // Increased buffer size for names
//     int id;
// } Student;
// typedef struct studentGrade {
//     Student student;
//     double grade;
// } StudentGrade;
// typedef struct course {
//     char name[50]; // Increased buffer size for course names
//     double averageGrade;
//     Student *students;
//     int studentCount;
// } Course;
//
// typedef struct school {
//     char name[50]; // Increased buffer size for school names
//     Course *courses;
//     int courseCount;
// } School;
//
// // Function to create a new student
// Student* createStudent(const char name[], int id) {
//     Student *student = (Student*)malloc(sizeof(Student));
//     if (student == NULL) {
//         printf("Memory allocation failed for student!\n");
//         return NULL;
//     }
//     strncpy(student->name, name, sizeof(student->name) - 1); // Use strncpy to avoid overflow
//     student->name[sizeof(student->name) - 1] = '\0'; // Ensure null-termination
//     student->id = id;
//     return student;
// }
//
// // Function to create a new course
// Course* createCourse(const char name[], double averageGrade, Student* students[], int studentCount) {
//     Course *course = (Course*)malloc(sizeof(Course));
//     if (course == NULL) {
//         printf("Memory allocation failed for course!\n");
//         return NULL;
//     }
//
//     strncpy(course->name, name, sizeof(course->name) - 1); // Use strncpy to avoid overflow
//     course->name[sizeof(course->name) - 1] = '\0'; // Ensure null-termination
//     course->averageGrade = averageGrade;
//     course->studentCount = studentCount;
//
//     // Allocate memory for the students array in the course
//     course->students = (Student*)malloc(studentCount * sizeof(Student));
//     if (course->students == NULL) {
//         printf("Memory allocation failed for students!\n");
//         free(course);
//         return NULL;
//     }
//
//     // Copy student data into the course's students array
//     for (int i = 0; i < studentCount; i++) {
//         course->students[i] = *students[i];
//     }
//
//     return course;
// }
//
// // Function to create a new school
// School* createSchool(const char name[], Course* courses[], int courseCount) {
//     School *school = (School*)malloc(sizeof(School));
//     if (school == NULL) {
//         printf("Memory allocation failed for school!\n");
//         return NULL;
//     }
//
//     strncpy(school->name, name, sizeof(school->name) - 1); // Use strncpy to avoid overflow
//     school->name[sizeof(school->name) - 1] = '\0'; // Ensure null-termination
//     school->courseCount = courseCount;
//
//     // Allocate memory for the courses array in the school
//     school->courses = (Course*)malloc(courseCount * sizeof(Course));
//     if (school->courses == NULL) {
//         printf("Memory allocation failed for courses!\n");
//         free(school);
//         return NULL;
//     }
//
//     // Copy course data into the school's courses array
//     for (int i = 0; i < courseCount; i++) {
//         school->courses[i] = *courses[i];
//     }
//
//     return school;
// }
//
// // Function to print student details
// void studentDetails(Student student) {
//     printf("Student details: ID: %d, Name: %s\n", student.id, student.name);
// }
//
// // Function to print course details
// void courseDetails(Course course) {
//     printf("Course details:\n");
//     printf("  Name: %s\n", course.name);
//     printf("  Average Grade: %.2f\n", course.averageGrade);
//     printf("  Student Count: %d\n\n", course.studentCount);
//
//     for (int i = 0; i < course.studentCount; i++) {
//         printf("Student %d details:\n", i + 1);
//         printf("  ID: %d\n", course.students[i].id);
//         printf("  Name: %s\n", course.students[i].name);
//     }
// }
//
// // Function to print school details
// void schoolDetails(School* school) {
//     if (school == NULL) {
//         printf("School is NULL!\n");
//         return;
//     }
//
//     printf("School details:\n");
//     printf("  Name: %s\n", school->name);
//     printf("  Course Count: %d\n\n", school->courseCount);
//
//     for (int i = 0; i < school->courseCount; i++) {
//         Course course = school->courses[i];
//         printf("Course %d details:\n", i + 1);
//         printf("  Name: %s\n", course.name);
//         printf("  Average Grade: %.2f\n", course.averageGrade);
//         printf("  Student Count: %d\n", course.studentCount);
//
//         for (int j = 0; j < course.studentCount; j++) {
//             printf("    Student %d details:\n", j + 1);
//             printf("      ID: %d\n", course.students[j].id);
//             printf("      Name: %s\n", course.students[j].name);
//         }
//         printf("\n");
//     }
// }
// bool checkStudentInCourse(Course course, Student student) {
//     for (int i=0;i<course.studentCount;i++) {
//         if (course.students[i].id == student.id) {
//             return true;
//         }
//     }
//     return false;
// }
// bool checkStudentInSchool(School school, Student student) {
//     for (int i=0;i<school.courseCount;i++) {
//         for (int j=0;j<school.courses[i].studentCount;j++) {
//             if (school.courses[i].students[j].id == student.id) {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// void printAllStudentCourses(School school, Student student) {
//     bool flag =false;
//     for (int i=0;i<school.courseCount;i++) {
//         for (int j=0;j<school.courses[i].studentCount;j++) {
//             if (school.courses[i].students[j].id == student.id) {
//                 printf("Student %s is enrolled in the course %s", student.name, school.courses[i].name);
//                 flag = true;
//             }
//         }
//     }
//     if (!flag) printf("Student %s , is not enrolled in any course of the school", student.name);
// }
// void printFailingStudents(Course course, StudentGrade* grades, int gradeCount, double passingGrades) {
//     printf("Students who failed in the course %s", course.name);
//
//     bool found = false;
//     for (int i=0;i<course.studentCount;i++) {
//         for (int j=0;j< gradeCount; j++) {
//             if(course.students[i].id == grades[j].student.id && grades[j].grade < passingGrades) {
//                 printf("Student name: %s, ID: %d, Grade: %.2f\n", grades[i].student.name, grades->student.id);
//                 found=true;
//             }
//         }
//     }
//     if (!found) printf("No students failed in the course %s.\n", course.name);
// }
// void printPsssedAverageGradeStudents(School school, double passingGrade) {
//     printf("Courses with an average grade equal to or higher than %.2f:\n", passingGrade);
//
//     bool found = false;
//     for (int i=0;i<school.courseCount;i++) {
//             if(school.courses[i].averageGrade >= passingGrade) {
//                 printf("Course name: %s, Average Grade: %.2f\n", school.courses[i].name, school.courses[i].averageGrade);
//                 found = true;
//             }
//     }
//     if (!found) printf("No courses have an average grade equal to or higher than %.2f.\n", passingGrade);
// }
// void printGradesOfAllCourses(School school) {
//     printf("Average grades of each course in the school %s:\n", school.name);
//     double totalAverageGrade = 0.0;
//     for (int i = 0; i < school.courseCount; i++) {
//         printf("  Course: %s, Average Grade: %.2f\n", school.courses[i].name, school.courses[i].averageGrade);
//         totalAverageGrade += school.courses[i].averageGrade;
//     }
//     // Calculate the overall average grade of all courses
//     double overallAverageGrade = school.courseCount > 0 ? (totalAverageGrade / school.courseCount) : 0.0;
//     printf("Overall average grade of the school's courses: %.2f\n", overallAverageGrade);
// }
// void printCourseWithHighestAverage(School school) {
//     // Initialize the course with the first course in the list
//     Course courseHighestAverage = school.courses[0];
//     for (int i = 1; i < school.courseCount; i++) {
//         if(courseHighestAverage.averageGrade > school.courses[i].averageGrade) {
//             courseHighestAverage =  school.courses[i];
//         }
//     }
//     printf("Course with the highest average in the school %s:\n", school.name);
//     printf("  Course: %s\n", courseHighestAverage.name);
//     printf("  Average Grade: %.2f\n", courseHighestAverage.averageGrade);
// }
// // Function to update the student's grade in a course
// void updateStudentGrade(StudentGrade* grades, unsigned int studentID, double newGrade, int gradeCount) {
//     // Iterate over all student grades
//     for (int i = 0; i < gradeCount; i++) {
//         // Check if the student ID matches the provided student ID
//         if (grades[i].student.id == studentID) {
//             // Update student grade
//             grades[i].grade = newGrade;
//             printf("Updated grade for student ID: %d, new grade: %.2f\n", studentID, newGrade);
//             return; // Exit the function after updating
//         }
//     }
//     // If no student with the provided ID is found
//     printf("Student with ID %d not found in the course.\n", studentID);
// }
// //Is course in School?
// bool isCourseInSchool(School* school, char* courseName) {
//     Course* courseArray = school->courses;
//     unsigned int numCourses = school->courseCount;
//
//     //iterate over all the courses in the array
//     for(unsigned int i=0;i< numCourses;i++) {
//         if(strcmp(courseArray[i].name, courseName)) return true;
//     }
//     return false;
// }
// //updating course name
// void updateCourseName(Course* course, char* newName){
//     strcpy(course->name, newName);
// }
// //printing common courses between schools
// void printCommonCoursesBetweenSchool(School* school1, School* school2) {
//     printf("Common courses between %s and %s:\n", school1->name,school2->name);
//     //iterate over all courses in the first school
//     for(unsigned int i=0;i<school1->courseCount;i++) {
//         if(isCourseInSchool(school2, school1->courses[i].name))
//             printf("%s\n", school1->courses[i].name);
//     }
// }
// //printing courses in one school while not in the other
// void printUniqueCoursesBetweenSchool(School* school1, School* school2) {
//     printf("Courses in %s but not in %s:\n", school1->name,school2->name);
//     for(unsigned int i=0;i<school1->courseCount;i++) {
//         if(!isCourseInSchool(school2, school1->courses[i].name))
//             printf("%s\n", school1->courses[i].name);
//     }
// }
//
//
// int main() {
//     // Example of creating students
//     Student *newStudent1 = createStudent("Alice", 101);
//     Student *newStudent2 = createStudent("Jim", 102);
//     // Create student grades
//     StudentGrade grades[] = {
//         { *newStudent1, 7.5 },
//         { *newStudent2, 9.0 }
//     };
//
//     // Check if student creation was successful
//     if (newStudent1 == NULL || newStudent2 == NULL) {
//         return 1;  // Exit if memory allocation for students failed
//     }
//     studentDetails(*newStudent1);
//
//     // Create an array of student pointers
//     Student *studentPacks[] = {newStudent1, newStudent2};
//
//     // Create two courses with the students
//     Course *newCourse1 = createCourse("DistSys", 8.5, studentPacks, 2);
//     Course *newCourse2 = createCourse("LowLatency", 9.0, studentPacks, 2);
//
//     // Check if course creation was successful
//     if (newCourse1 == NULL || newCourse2 == NULL) {
//         free(newStudent1);
//         free(newStudent2);
//         return 1;  // Exit if memory allocation for courses failed
//     }
//     courseDetails(*newCourse1);
//
//     // Create an array of course pointers
//     Course *coursePack[] = {newCourse1, newCourse2};
//
//
//     // Print failing students
//     printFailingStudents(*newCourse1, grades, 2, 8.0);
//
//     Student checkStudent = {"Alice", 101};
//     if (checkStudentInCourse(*newCourse1, checkStudent)) {
//         printf("Student is enrolled in the course.\n");
//     } else {
//         printf("Student is not enrolled in the course.\n");
//     }
//
//     // Create a school with the courses
//     School *newSchool = createSchool("ElemSchool", coursePack, 2);
//     if (checkStudentInSchool(*newSchool, *newStudent1)) {
//         printf("Student is enrolled in the school.\n");
//     } else {
//         printf("Student is not enrolled in the school.\n");
//     }
//
//
//
//     // Print school details if creation was successful
//     if (newSchool != NULL) {
//         // Print school details
//         printf("School Created: %s\n", newSchool->name);
//         for (int i = 0; i < newSchool->courseCount; i++) {
//             Course course = newSchool->courses[i];
//             printf("  Course: %s, Avg Grade: %.2f\n", course.name, course.averageGrade);
//             printf("  Students Enrolled:\n");
//             for (int j = 0; j < course.studentCount; j++) {
//                 printf("    Name: %s, ID: %d\n", course.students[j].name, course.students[j].id);
//             }
//         }
//
//         // Print school details
//         schoolDetails(newSchool);
//         // Print grades of all courses
//         printGradesOfAllCourses(*newSchool);
//         // Print the course with the highest average grade
//         printCourseWithHighestAverage(*newSchool);
//         // Free the memory allocated for courses and their students
//         for (int i = 0; i < newSchool->courseCount; i++) {
//             free(newSchool->courses[i].students);
//         }
//         free(newSchool->courses);
//         free(newSchool);
//     }
//
//     // Free the memory allocated for individual students
//     free(newStudent1);
//     free(newStudent2);
//
//     return 0;
// }

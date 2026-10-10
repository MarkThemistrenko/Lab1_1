#include <stdio.h>
#include <stdlib.h>

#define Name "Mark"
#define LastName "Tsehmistrenko"
#define GroupName "RB-61"
#define Faculty "RTF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"

int main(void) {
    unsigned int semestr;
    unsigned int age;
    float admissionScore;
    int grade1;
    int grade2;
    int grade3;
    double averageGrade;

    printf("%s %s, enter the following data:\n", Name, LastName);

    printf("Enter semester: ");
    scanf("%u", &semestr);

    printf("Enter your admission score: ");
    scanf("%f", &admissionScore);

    printf("Enter grade #1: ");
    scanf("%d", &grade1);

    printf("Enter grade #2: ");
    scanf("%d", &grade2);

    printf("Enter grade #3: ");
    scanf("%d", &grade3);

    printf("Enter your age: ");
    scanf("%u", &age);

    // Calculate the average grade safely using floating-point division
    averageGrade = (double)(grade1 + grade2 + grade3) / 3.0;

    // Clear the console screen (Windows-specific "cls", use "clear" for Linux/macOS)
    system("cls");

    // Print out the student report card
    printf("%s\n", University);
    printf("%s\n", Faculty);
    printf("%s\n", GroupName);
    printf("---------------------------\n");
    printf("student: %s %s\n", Name, LastName);
    printf("age: %u\n", age);
    printf("semester: %u\n", semestr);
    printf("---------------------------\n");
    printf("admission score: %.2f\n", admissionScore);
    printf("average grade = %.3lf\n", averageGrade);

    return 0;
}





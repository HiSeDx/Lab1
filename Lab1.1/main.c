#include <stdio.h>
#include <stdlib.h>
#define Name "Andrii"
#define LastName "Mariienko"
#define GroupName "RE-22"
#define Faculty "RTF"
#define University "Igor Sykorsky Kyiv Polytechnic Institute"

int main()
{
    unsigned int age;
    unsigned int semestr;
    float admissionScore;
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    int grade5;
    double averageGrade;

    printf("%s %s Enter following data.\n", Name, LastName);
    printf("Enter the semestr: ");
    scanf("%u", &semestr);

    printf("Enter your admission score: ");
    scanf("%f", &admissionScore);

    printf("Enter grade #1: ");
    scanf("%d", &grade1);

    printf("Enter grade #2: ");
    scanf("%d", &grade2);

    printf("Enter grade #3: ");
    scanf("%d", &grade3);

    printf("Enter grade #4: ");
    scanf("%d", &grade4);

    printf("Enter grade #5: ");
    scanf("%d", &grade5);

    printf("Enter your age: ");
    scanf("%u", &age);

    averageGrade = (double)(grade1+grade2+grade3+grade4+grade5)/5;
    printf("\n\t Average grade = %.2f", averageGrade);


    system("cls");
    printf("***************");
    printf("\n===============");
    printf("\n%s", University);
    printf("\n%s", Faculty);
    printf("\n%s", GroupName);
    printf("\n===============");
    printf("\nstudent: %s %s", Name, LastName);
    printf("\nage: %u", age);
    printf("\nsemestr: %u", semestr);
    printf("\n===============");
    printf("\nadmission score: %.1f", admissionScore);
    printf("\naverage grade = %.2f", averageGrade);
    printf("\n");

    return 0;
}

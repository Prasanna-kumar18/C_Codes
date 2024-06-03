#include<stdio.h>

int subject_1,subject_2,subject_3;
int marks_average = 0;
int student_percentage = 0;


int main()
{
printf("Enter subject1 marks: \n");
fflush(stdout);
scanf("%d",&subject_1);
printf("Enter subject2 marks: \n");
fflush(stdout);
scanf("%d",&subject_2);
printf("Enter subject3 marks: \n");
fflush(stdout);
scanf("%d",&subject_3);
average();
printf("Student average score is: %d\n",marks_average);
fflush(stdout);
percentage();
printf("Student percentage is: %d\n",student_percentage);
fflush(stdout);
}

int average()
{

marks_average = (subject_1 + subject_2 + subject_3)/3;

}

int percentage()
{
student_percentage = ((marks_average)/3);
}
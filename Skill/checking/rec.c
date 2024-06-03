#include <stdio.h>
#include<string.h>

union student {
    char Name[50];
    char subject[20];
    float percentage;
};

int main() 
    {
    union student data;

    printf("\nThe student data is");

    strcpy(data.Name,"Arun");
    printf("\nName: %s", data.Name);

    strcpy(data.subject, "Maths");
    printf("\nSubject Name: %s",data.subject);

    data.percentage = 89.50;
    printf("\nPercentage: %f",data.percentage);
    
    
    return 0;
}
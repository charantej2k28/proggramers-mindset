#include <stdio.h>

int main() {
    float ap, maths,english,chem, pps;
    float total, average, percentage;

    printf("Enter marks for ap: ");
    scanf("%f", &ap);
    printf("Enter marks for maths: ");
    scanf("%f", &maths);
    printf("Enter marks for english: ");
    scanf("%f", &english);
    printf("Enter marks for chem: ");
    scanf("%f", &chem);
    printf("Enter marks for pps: ");
    scanf("%f", &pps);

    total = ap+maths+english+chem+pps;
    average = total / 5;
    percentage = (total / 500) * 100; 
    printf("\nTotal Marks: %.2f", total);
    printf("\nAverage Marks: %.2f", average);
    printf("\nPercentage: %.2f%%\n", percentage);

    return 0; 
}

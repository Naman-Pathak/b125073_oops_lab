#include <stdio.h>
#include <stdlib.h>
struct Student {
    int rollNo;
    char name[50];
    float marks;
};
int main() {
    int n, i, maxIndex = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    printf("\nStudent with the highest marks:\n");
    printf("Roll Number: %d\n", students[maxIndex].rollNo);
    printf("Name: %s\n", students[maxIndex].name);
    printf("Marks: %.2f\n", students[maxIndex].marks);
    free(students);

    return 0;
}

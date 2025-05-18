#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks:");
    scanf("%d", &marks);

    switch (marks / 10) {
        case 10:
        case 9:
        case 8:
            printf("Grade: A+");
            break;
        case 7:
            printf("Grade: A");
            break;
        case 6:
            printf("Grade: B");
            break;
                    case 5:
            printf("Grade: C");
            break;
                    case 3:
                    case 2:
                    case 1:
                    case 0:
            printf("Grade: F");
            break;
    }

    return 0;
}

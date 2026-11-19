#include <stdio.h>

struct student {
    int roll;
    char name[20];
    int m1, m2, m3;
    int total;
    float per;
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter roll no: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks of 3 subjects: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].per = s[i].total / 3.0;
    }

    printf("\nRoll No\tName\tSub1\tSub2\tSub3\tTotal\tPercentage\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f\n", s[i].roll, s[i].name, s[i].m1, s[i].m2, s[i].m3, s[i].total, s[i].per);
    }

    return 0;
}

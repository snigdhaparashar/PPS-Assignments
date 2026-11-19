#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int ch;

    while (1) {
        printf("\n1.Length 2.Copy 3.Concat 4.Compare 5.Substring 6.Exit\nChoice: ");
        scanf("%d", &ch);
        if (ch == 6) break;

        printf("Enter string 1: ");
        scanf(" %[^\n]", s1);

        if (ch >= 3 && ch <= 5) {
            printf("Enter string 2: ");
            scanf(" %[^\n]", s2);
        }

        switch (ch) {
            case 1: printf("Length: %zu\n", strlen(s1)); break;
            case 2: strcpy(s2, s1); printf("Copied: %s\n", s2); break;
            case 3: printf("Concatenated: %s\n", strcat(s1, s2)); break;
            case 4: printf("%s\n", strcmp(s1, s2) == 0 ? "Equal" : "Not Equal"); break;
            case 5: printf("%s\n", strstr(s1, s2) ? "Found" : "Not Found"); break;
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}

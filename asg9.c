#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;  
    *a = *b;   
    *b = temp;  
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping:  num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
[21:12, 19/11/2026] Snigdha: #include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourcePath);

    printf("Enter destination file name: ");
    scanf("%s", destPath);

    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file %s\n", sourcePath);
        exit(EXIT_FAILURE);
    }

    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Cannot open destination file %s\n", destPath);
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }
  
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

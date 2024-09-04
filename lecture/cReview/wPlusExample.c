#include <stdio.h>


int main()
{
    /*If test is not a file in this folder w will create it.*/
    FILE* f1 = fopen("test.txt", "w+");

    int num1 = 1;
    int num2 = 2;

    int num3, num4;

    /*We are going to write some data to the file*/
    fprintf(f1, "%d\n%d", num1, num2);

    /*Why did I use rewind here*/
    rewind(f1);

    /*Now lets read the data that was added to the file
     *then print it to stdout*/
    fscanf(f1, "%d %d", &num3, &num4);
    printf("%d %d\n", num3, num4);

    return 0;
}
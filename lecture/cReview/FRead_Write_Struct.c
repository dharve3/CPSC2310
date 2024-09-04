/*Adapted from: 
https://www.tutorialspoint.com/explain-the-functions-fread-and-fwrite-used-in-files-in-c*/
#include<stdio.h>
struct student{
   int sno;
   char sname [30];
   float marks;
   char temp;
};
int main ( ){
   struct student s[60];
   int i;
   FILE *fp = fopen ("student1.txt", "w");
/*The following code reads user input data stores it in an array of type
    struct student (see above). */
   for (i=0; i<2; i++)
   {
      printf("enter details of student %d\n", i+1);
      printf("student number:");
      scanf("%d",&s[i].sno);
      scanf("%c",&s[i].temp);
      printf("student name:");
      scanf("%s", s[i].sname);
      printf("student marks:");
      scanf("%f",&s[i].marks);
      //fwrite(&s[i], sizeof(s[i]),1,fp);
      /*All the data is stored in the struct, then the entire struct is written
       *to the student1.txt file.  You may not be able read it because it is 
       *binary.*/
      /*The original code had the fwrite in this loop. 
       *One of the advantages of using fwrite and fread is that you can write
       *and read chuncks of data at a time. Below is how you can use fwrite to 
       *write all the data to the file at one time.*/
   }
   fwrite(&s, sizeof(s),1,fp);
   fclose (fp);
   fp = fopen ("student1.txt", "r");
   
   fread (&s, sizeof (s) ,1,fp);
   for (i=0; i<2; i++)
   {
      printf ("details of student %d are\n", i+1);
      //Read the data for one student from the specified element of the array
      //fread (&s[i], sizeof (s[i]) ,1,fp);
      printf("student number = %d\n", s[i]. sno);
      printf("student name = %s\n", s[i]. sname);
      printf("marks = %f\n", s[i]. marks);
   }
   fclose(fp);
   return 0;
}

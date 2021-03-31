
#include <stdio.h>

int main ()
{
   char name [20];
   int age, length;
   FILE *fp;
   fp = fopen ("test.txt","rw+");
   fprintf (fp, "%s %d", "Fresh2 refresh", 5);
   length = ftell(fp); // Cursor position is now at the end of file
   /* You can use fseek(fp, 0, SEEK_END); also to move the 
      cursor to the end of the file */
   rewind (fp); // It will move cursor position to the beginning of the file
   fscanf (fp, "%s", name); 
   fscanf (fp, "%d", &age);
   fclose (fp);
   printf ("Name: %s \n Age: %d \n",name,age);
   printf ("Total number of characters in file is %d", length);
   return 0;
}


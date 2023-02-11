#include <stdio.h>

main() {

   FILE *fp;
   char buff[255];

   char input_file[255];
   char output_file[255];
   char key[5];

   scanf("%s%s%s", input_file, output_file, key);

//   printf("input file: %s", input_file);

   int num_dec;
   fp = fopen(input_file, "r");
   fscanf(fp, "%s", buff);
   num_dec = (intptr_t)buff;
   printf("1: %d\n", num_dec);

   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );
   
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);

}


#include <stdio.h>      //standard input/output. header
#include <stdbool.h>    //to include booleans
int main(){
   /*   escape sequence = character combination consisting of a backslash \
                            followed byyy a letter or combination of digits.
                            They specify actions within a line or string of text.
                            \n = newline
                            \t = tab
   */
    printf("\"I like pizza!\"\n\t- Abraham Lincoln probably\n");// "\"example\"" displays quotes
    printf("\'I like pizza!\'\n\t- Abraham Lincoln probably\n");// "\'example\'" displays single quotes
    printf("\\I like pizza!\\\n\t- Abraham Lincoln probably\n");// "\\example\\" displays double backslashes
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("--------------------------------------------------\n");

    /* variable = Allocated space in memory to store a value.
                  We refer to a variable's name to access the stored value.
                  That variable now behaves as if it was the value it contains.
                  BUT we need to declare what type of data we are storing.
    */
   int x;       //declaration
   x = 123;     // initialization
   int y = 321; //both

   int age = 21;        //integer
   float gpa = 2.05;    //floating number (number that contains a decimal)
   char grade = 'C';    //single character
   char name[] = "Bro"; //array of characters


   printf("Hello %s\n",name);                   //%s array
   printf("You are %d years old\n",age);        //%d integer
   printf("Your average grade is %c\n",grade);  //%c character
   printf("your gpa is %f\n",gpa);              //%f float

   float c = 3.141592653589793;          //4 bytes (32 bits of precision) 6-7 digits %f
   double d = 3.141592653589793;//8 bytes (64 bits of precision) 15-16 digits %lf (long float)

   printf("%0.15f\n",c); //0.15 will push past character limit
   printf("%0.15lf\n",d);//double is more accurate and retains the correct numbers

   bool e = true;   // 1 byte (true or false) %d

   printf("\'%d\' means true!!\n",e); //1 for true 0 for false

   char f = 100;    // 1 byte (-128 to 127) %d or %c 
                    //can use ASCII table to convert this number (decimal) to a character representation
   printf("The \"Decimal\" value is \'%d\'\n",f);
   printf("The corresonding character is \'%c\'\n",f);

   unsigned char g = 255;   // 1 byte (0 to 255) %d or %c
   printf("%d\n",g);

   short int h = 32767;         // 2 bytes (-32,768 to 32,767) %d (dont need int)
   unsigned short int i = 65535;// 2 bytes (0 to 65,535) %d (dont need int)
   printf("%d\n",h);
   printf("%d\n",i);

   int j = 2147483647;          //4 bytes (-2,147,483,648 to 2,147,483,647) %d
   unsigned int k = 4294967295; //4 bytes (0 to 4,294,967,295) %u
   printf("%d\n",j);
   printf("%u\n",k);

   long long int l = 9223372036854775807;           // 8 bytes (-9 quintillion to 9 quintillion) %lld
   unsigned long long int m = 18446744073709551615; //8 bytes (0 to 18 quintillion) %llu
   printf("%lld\n",l);
   printf("%llu\n",m);




   return 0;
}
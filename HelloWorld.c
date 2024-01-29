#include <stdio.h> //standard input/output. header
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

   float c = 3.141592;          //4 bytes (32 bits of precision) 6-7 digits %f
   double d = 3.141592653589793;//8 bytes (64 bits of precision) 15-16 digits %lf


   return 0;
}
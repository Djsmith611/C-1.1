#include <stdio.h> //standard input/output. header
int escapeSequences(){
   /*   escape sequence = character combination consisting of a backslash \
                            followed byyy a letter or combination of digits.
                            They specify actions within a line or string of text.
                            \n = newline
                            \t = tab
   */
    printf("\"I like pizza!\"\n\t- Abraham Lincoln probably\n");// "\"example\"" displays quotes
    printf("\'I like pizza!\'\n\t- Abraham Lincoln probably\n");// "\'example\'" displays single quotes
    printf("\\I like pizza!\\\n\t- Abraham Lincoln probably\n");// "\\example\\" displays double backslashes
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\t");
    return 0;
}

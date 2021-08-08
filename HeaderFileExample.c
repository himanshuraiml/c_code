#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
   char s1[20] = "53875";
   char s2[10] = "Hello";
   char s3[10] = "World";
   int res;

   res = pow(8, 4);
   printf("Using math.h, The value is : %d\n", res);

   long int a = atol(s1);
   printf("Using stdlib.h, the string to long int : %d\n", a);
   
   strcpy(s2, s3);
   printf("Using string.h, the strings s2 and s3 : %s\t%s\n", s2, s3 );

   return 0;
}

/*  
ctype.h - used for testing and mapping characters; int tolower(int c): This function converts uppercase letters to lowercase.
int toupper(int c):This function converts lowercase letters to uppercase.


math.h -defines various mathematical functions and one macro. All the functions available in this library take double as an argument and return double as the result.
exaples : pow()-power function, sin, cos ,ten..., asin-arc sin, sinh-hyperboloc sin; exp- e to power...log , log10, sqrt,floor.


stdlib.h - uded in data type conversion and memory allocation 
atof,atoi, calloc, malloc, free...etc

string.h - sgtring and char  manuplation
strcat, strcmp, strcoy, strlen...etc


time.h- have functions for manipulating date and time.
clock_t_clock, time_t_time, ctime, and 
struct tm {
   int tm_sec;         seconds,  range 0 to 59          
   int tm_min;         /* minutes, range 0 to 59           
   int tm_hour;        /* hours, range 0 to 23             
   int tm_mday;        /* day of the month, range 1 to 31  
   int tm_mon;         /* month, range 0 to 11             
   int tm_year;        /* The number of years since 1900   
   int tm_wday;        /* day of the week, range 0 to 6    
   int tm_yday;        /* day in the year, range 0 to 365  
   int tm_isdst;       /* daylight saving time             
};
/
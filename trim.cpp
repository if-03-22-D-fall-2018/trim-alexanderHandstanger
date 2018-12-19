/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "trim.h"
 #include <string.h>
 #include "stdio.h"
 void 	trim (const char *source, char *trimmed_string)
 {

   if (strcmp(source,"") == 0){
     strcpy(trimmed_string,"");
   }

   else{
     int min = 0;
     int count = 0;
     int max = strlen(source)-1;
     while (source[min] == ' '){
       min++;
     }
     while(max >= min && source[max] == ' ')   {
       max--;
     }
     for (int i = min; i <= max; i++) {
       trimmed_string[count] = source[i];
       count++;
     }
   }
 }

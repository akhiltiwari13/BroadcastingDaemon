/**
  * @brief Definition of display text
  * @param text
  */
  
 #include <string.h>
 #include "../custom_headers/external_libraries.h"

 void display_state(char *text)
 {
   #define TSIZE    50

   static char table[TSIZE][64];
   static int  entries = 0;
   int         i, found;

   /* Search the  table for an entry with a matching  text string.  If
      found, the ordinal position of the entry in the table is used to
      determing the position on the screen at which this entry will be
      displayed.If no matching entry is found and the table is not
      full, a new entry is created.
   */

   for (i=0, found=0; i<entries; i++) {
      if (strcmp(text, table[i]) == 0) {
         found = 1;             /* Found a matching entry */
         break;
      }
   }
   if (!found) {
      if (entries == TSIZE)	/* Table is full */
         return;
      strcpy(table[entries], text);
      i = entries++;            /* Create new table entry */
   }
   /* Update the display of the i'th entry in the table */
   move(i, 1);
   printw("%16s", text);
   refresh();
}

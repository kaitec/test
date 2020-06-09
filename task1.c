#include < string.h >

char *str_init = "Hello World";
char *str_out  = "";

void copy_str()
{
   strcpy (str_out, str_init);
}

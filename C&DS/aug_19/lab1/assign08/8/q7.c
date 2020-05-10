#include <stdio.h> 
#include <string.h> 

int main () 
{ 
char str1[] = "cdac"; 
char str2[] = "acts"; 
char str3[10];

puts("\nBefore Swapping "); 
puts(str1); 
puts(str2);

memcpy (str3, str1, sizeof(str1)); 
memcpy (str1, str2, sizeof(str2)); 
memcpy (str2, str3, sizeof(str3)); 



puts("\nafer Swapping "); 
puts(str1); 
puts(str2);
return 0; 
} 


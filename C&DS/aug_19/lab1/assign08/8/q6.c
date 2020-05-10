#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   char str3[50];
   int ret;

   memcpy(str1, "ABCDEF", 6);
   memcpy(str2, "ABCDEF", 6);
   memcpy(str3, "This is the world full of programs",40);		//void * memcpy(void *to, const void *from, size_t numBytes);

   ret = memcmp(str1, str2, 5); 		//int memcmp(const void *str1, const void *str2, size_t n)

   if(ret > 0) {
      printf("str2 is less than str1\n");
   } else if(ret < 0) {
      printf("str1 is less than str2\n");
   } else {
      printf("str1 is equal to str2\n");
   }

   printf("Before memset----> %s\n",str3);
   
   memset(str3+13,'_',5);

   printf("After memset----> %s\n",str3);
   
   bzero(str3+13,5);				//void bzero(char *s, int n);

   printf("After bzero----->%s\n",str3);
   return(0);
}





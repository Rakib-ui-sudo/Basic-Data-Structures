#include<stdio.h>
#include<string.h>
int main()
{
     char s[1000];
     scanf("%s",s);
     int len_s = strlen(s);

     int cou [256]= {0};
     for (int i = 0; i <len_s; i++)
     {
        int val = s[i];
        cou[val] ++; 
     }
     for (int i = 0; i < 256; i++)
     {
       if (cou[i] > 0)  
        {
            printf("%c : %d\n", i, cou[i]);
        }
     }

     
    return 0;
}
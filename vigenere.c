#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc!=2)
    {
        printf("Usage: /home/workspace/pset2/vigenere <keyword>\n");
        return 1;
    }
    
    else if(argc == 2)
    {
        for (int i=0, n=strlen(argv[1]); i<n; i++)
        {
            if(!isalpha(argv[1][i]))
            {
                printf("Keyword must contain only alphabets\n");
                return 1;
            }
        }
            
    }   
     
string k = argv[1];
string s = GetString();
int x = 0;

  for (int i = 0, j=0, n=strlen(s); i<n; i++)
   {
     if(isalpha(s[i]))
     {
         x = j % strlen(k); 
         if(isupper(s[i]))
         {
             if(isupper(k[x]))
             {
                 s[i] = (((s[i] - 65)+(k[x] - 65))%26) + 65;
                 printf("%c", s[i]);
             }
             else
             {
                 s[i] = (((s[i] - 65)+(k[x] - 97))%26) + 65;
                 printf("%c", s[i]);
             }
         }
         
         if(islower(s[i]))
         {
             if(islower(k[x]))
             {
                s[i] = (((s[i] - 97)+(k[x] - 97))%26) + 97;
                printf("%c", s[i]);
             }
             else
             {
                 s[i] = (((s[i] - 97)+(k[x] - 65))%26) + 97;
                 printf("%c", s[i]);
             }
         }
         
     
      j++;  
     }
    
     else
     {
        printf("%c", s[i]);
     }
    
   }
printf("\n");  
}

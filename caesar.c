#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{  
 if(argc!=2)
  {
    printf("Usage: /home/workspace/pset2/caesar <key>\n");
    return 1;
  }
  
 else
  { 
     int k = atoi(argv[1]);   
     string s = GetString();
     
    for (int i = 0, n=strlen(s); i<n; i++)
      { 
        if (isupper(s[i]))
        {
            s[i]= ((s[i]-65)+k)%26;
            printf("%c", s[i]+65);
        }
        else if (islower(s[i]))
        {
            s[i]= ((s[i]-97)+k)%26;
            printf("%c", s[i]+97);
        }
        else
         printf("%c",s[i]);
      } 
    
      printf("\n");
  
  }
}

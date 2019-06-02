/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h> //I am including "string" because of the "strlen" function

int main()
{
  char strCipher[255];  
//this is the cipher that the user is going to input
//to retain simplicity, I chose to set a limited but large size
  int strKey[255][2]; 
/*this is a 2D array that I am creating in order to store: 
the number of repetitions for each symbol in the cipher in the first dimension;
and the position in which each respective symbol in the cipher is encountered for the first time in the second dimension
*/

 int i;
 int j;
 
for (i = 0; i < 255; i++)
strKey[i][0] = 0;
//all encounters of symbols are set to 0


for (j = 0; j < 255; j++)
strKey[j][1] = -1;
//all first positions are set to -1 
  
  printf("Enter the cipher text:\n");
  scanf("%s", strCipher);
  //the user is prompted to provide the cipher
 
  printf("The cipher text is: %s\n", strCipher);
  //outputs the cipher

int length = strlen(strCipher);
//finds the length of the cipher

 
int x;
int y;

for (x=0; x<length; x++)
    {   for (y=0; y<length; y++)
             {  
                 if (strCipher[y]==strCipher[x])
              {strKey[x][0]++;
               strKey[x][1]=x;
              }
             }
    }
//sets all symbols of the [..][1] dimension to be equal to the index of the occurrence in the cipher


int m;
int n;
for (m=0; m<length; m++)
    {   for (n=m+1; n<length; n++)
             {  
                 if (strCipher[n]==strCipher[m])
               strKey[n][1]=-1;
              
             }
    }
    // sets all repeated positions of occurrence in [..][1]to be equal to -1
    


int g;
int h;
int swapone;
int swaptwo;

for (g = 0; g < length; ++g) 
        {
            for (h = g + 1; h < length; ++h) 
            {
                if (strKey[g][0] < strKey[h][0]) 
                {
                    swapone = strKey[g][0];
                    swaptwo = strKey[g][1];
                    strKey[g][0] = strKey[h][0];
                    strKey[g][1] = strKey[h][1];
                    strKey[h][0] = swapone;
                    strKey[h][1] = swaptwo;
                }
            }
        }
//sorts the array strPass in descending order according to the [..][0] dimension, keeping all pairs between the two dimensions        

printf("The password is: \n");


int temp; 
int four=0;

for (i=0; i<length; i++)
{if ((strKey[i][1]!=-1)&& four<4)
{temp = strKey[i][1];
printf("%c", strCipher[temp]);
four++;
}
}
/*
the first 4 digits of strPass's [..][1] dimension that are not -1 are sought; 
then, the 4 elements of the original cipher (strCipher) that are placed in these 4 positions are printed;
this is the key
*/


    return 0;
}

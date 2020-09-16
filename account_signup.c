// # Account-Signup Program Implementation
//I have done a account signup project using C Programminag

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

 int main(){

      char a[15],b[15],c[15];
 printf(" ACCOUNT SIGN-UP\n");     
    
 //Label for initial password getting

loop:   printf("\nEnter a valid password:");
    gets(a);
    
  int n=strlen(a); //copy the characters of the string
    strcpy(b,a);
    int c1=0; //initialising count of small and capital alphabets ,numbers and special characters
    int c2=0;
    int c3=0;
    int c4=0;

    for(int i=0;a[i]!='\0';i++){

        if(a[i]>='A'&&a[i]<='Z'){
           c1++;
               }
     else if(a[i]>='a'&&a[i]<='z'){
           c2++;
                }
      else if(a[i]>='0'&&a[i]<='9'){
            c3++;
            } 
     else{
       c4++;
         }   
        
      }  

//Checking strength of password

 if(c4>0&&c1>0&&c2>0&&c3>0&&(c1+c2+c3+c4)>8&&(n>=8&&n<=15)){
               clrscr();
  
 //Label for confirm password

      top:  printf("\nConfirm Password:");
            gets(a);

//Condition for confirmation of password

            if(strcmp(a,b)==0){
               printf("\nPassword has been set.\n");
               clrscr();
               strcpy(c,b);
               }
       
            else {
               printf("\nAgain Confirm Password.\n");
               clrscr();
               goto top;
              }
        }
                 
      else if(n<8||n>15){

              printf("\nPassword range must be between 8 to 15 characters.\n");
              clrscr();
              goto loop;
                }

  else if(c1==0||c2==0||c3==0||c4==0){
              printf("\nPassword must be a mix of capital letters,small letters ,numbers and special characters.\n");
              clrscr();
              goto loop;
              }
   
      else{
           clrscr();
           goto loop;
           }
        
   //Label for Login area
     
  pass:     printf("\nLOGIN:\n");
 
  //Password validation and account access process 

   printf("\nEnter Password:");
    
    gets(b);
   
    if(strcmp (b,c)==0){
      printf("\nAccess Granted.Welcome to your new account.");
                      }
    else{
        printf("\nAccess Denied\n");
        clrscr();
        goto pass;
        }
         
   }   
    

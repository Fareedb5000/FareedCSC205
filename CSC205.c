#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#define MAX_LENGTH 256
char name[MAX_LENGTH];
int age;
char sex;
double GPA;




int main(){

printf("Hey there, i am an AI that gives out a summary of some information that you give me, the instructions are you tell me your name, age, sex and GPA.\n");

printf("Enter your name: \n");


fgets(name, MAX_LENGTH, stdin);
printf("Your name is %s ", name);

printf("Enter your age: \n");
scanf("%d\n", &age);
printf("And you are %d year(s) old\n", age);
//README: When you enter your age, enter your gender as well, M for male and F for female, the code isnt showing errors so i dont know what is going on//
printf("Enter your sex (M for male and F for female): ");
scanf("%c\n", &sex);
printf("From what you said, it seems you are %c, hope i didnt get that wrong\n", sex);

printf("Enter your GPA:");
scanf("%lf\n", &GPA);
if(GPA > 4.0){printf("Wow, you're really smart");}
else{printf("Alright then, if you're cool with it, thats cool, if not you can work harder\n");}

printf("Alright, this is the end of the program, thanks for using me (:\n");

return 0;}

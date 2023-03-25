#include<stdio.h>
#include<stdlib.h>
int main(int ac,char** av){
if(ac!=3){
return 0;
}
int x= atoi(av[1]);
int y= atoi(av[2]);
if(x<1 || y<1){

}
else if (x==1 && y==1){
 printf("o\n");
}
else if(x>=2 && y==1){
 printf("o");
 for(int i=x-2;i>0;i--){
     printf("-");
 }
 printf("o\n");
}
else if(y>=2 && x==1){
 printf("o\n");
 for(int i=y-2;i>0;i--){
     printf("|\n");
 }
 printf("o\n");
}
else{
    // Printing the top
 printf("o");
 for(int i=x-2;i>0;i--){
     printf("-");
 }
 printf("o\n");
 // Printing the middle
 for(int i=y-2;i>0;i--){
     printf("|");
     for(int i=x-2;i>0;i--){
     printf(" ");
     }
     printf("|\n");
 }
 // Printing the bottom
 printf("o");
 for(int i=x-2;i>0;i--){
     printf("-");
 }
 printf("o\n");

}

return 0;
}

// Description
// Create a program which displays a beautiful square.

// my_square(5,3) should display:

// $>./a.out 5 3
// o---o
// |   |
// o---o
// $>
// my_square(5, 1) should display:

// $>./a.out 5 1
// o---o
// $>
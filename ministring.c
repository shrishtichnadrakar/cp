
// mini project using function,strings,array 



#include <stdio.h>






int count(char str[],char ch);
void checkchar(char str[],char ch);


int main () {

char str[100];
char ch;
char input;

printf("entre the text: ");
scanf("%[^\n]",&str);
printf("which character you want to find : ");
scanf(" %c",&ch);
checkchar (str,ch);

printf("want to know how many times");
scanf(" %c", &input);


if (input== 'y') {
    printf("the charecter repeaded %d times", count (str,ch));
}
else if (input=='n') {
    printf(" thakyou");
}







return 0;

}

void checkchar ( char str[],char ch) {
    for (int i=0;str[i] !='\0';i++) {
        if (str[i]== ch){
            printf("the character is there \n");
           return;
        }
        
    }
   printf("not there \n ") ;
}


int count (char str[],char ch) {
    int c=0;
    for (int i=0;str[i] != '\0';i++) { 
        if( str[i]==ch) {
            c++;
        }
    


    }
    return c;
}

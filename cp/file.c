#include <stdio.h>

int main () {
    FILE *fptr;
    fptr= fopen("file.txt","a");

    

    char name [100];
    int age;
    float cgpa;
    
    printf("entre your name : ");
    scanf("%[^\n]",name);
    // fgets (name,100,stdin);
    printf("entre your age : ");
    scanf("%d",&age);
    printf("entre your cgpa : ");
    scanf("%f",&cgpa);



    
    fprintf(fptr, "name: %s \n ", name);
    fprintf(fptr, "age : %d \n", age);
    fprintf(fptr, "cgpa :%f \n", cgpa);
     

    fclose(fptr);
    return 0;
}
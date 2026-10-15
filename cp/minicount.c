#include <stdio.h>

int count1(int n1, int n);
int count2 (int n1,int n);
int main ()  { 
      static int n1=0;
    int n;
    int choice;
    while(1) {
    printf("costumer  1 for entering or 2 for leaving and 0 for exiting the program : ");
    scanf("%d",&choice);
    

    if(choice == 1 ) {
        printf("how many costumer are entering : ");
        scanf("%d",&n);
        

      n1=  count1(n1,n);
         printf("total costumer: %d \n",n1);

    }
    else if (choice == 2) {
         printf("how many costumer are leaving : ");
        scanf("%d",&n);
        
       n1 = count2(n1,n);
         printf("total costumer:   %d \n", n1);
    }

    else if ( choice == 0) {
        printf("you exited the program \n");
        break;
    }
   
}







return 0; 
}



int count1 ( int n1 ,int n) {
    
    for (int i =0;i<n;i++) {
        n1++;
    }
    return n1;
   
}



int count2 (int n1,int n) {
    if (n>0) { 
        for (int i=0;i<n;i++) {
        n1--; }
        return n1;
       
    }
    
}
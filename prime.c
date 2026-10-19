#include <stdio.h>
#include<math.h>

int main () {

int n,x;
printf("entre a number : ");
scanf("%d",&n);

int c=0;

// x= sqrt(n);


for (int i=2;i<n;i++) {
    if (n%i==0) {
     
    c=1;
        
           
    }
    
}
if (n<=1) {
   
    printf("neither prime nor composite");

}
else if (c==1) {

printf(" %d not a prime number", n);
}

else {
    printf(" %d is a prime number", n);
}

return 0;

}
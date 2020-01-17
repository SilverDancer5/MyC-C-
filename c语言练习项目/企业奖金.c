#include<stdio.h>
float main()
 {
     float i;

    printf("please input a number:");
    scanf("%f",&i);

         if(i<=10) {i=0.1*i         ;printf("i=%f",i);}
    else if(i<=20) {i=1+(i-10)*0.75 ;printf("i=%f",i);}
    else if(i<=40) {i=(i-20)*0.05   ;printf("i=%f",i);}
    else if(i<=60) {i=(i-40)*0.03   ;printf("i=%f",i);}
    else if(i<=100){i=(i-60)*0.015  ;printf("i=%f",i);}
    else if(i>100) {i=(i-100)*0.01  ;printf("i=%f",i);}

    return 0;
}

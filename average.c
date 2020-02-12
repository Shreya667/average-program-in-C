#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade1;
    float grade2;
    float grade3;

    printf("enter your 3 test grades \n");
    scanf(" %f", &grade1);
    scanf(" %f", &grade2);
    scanf(" %f", &grade3);

    float avg= (grade1+ grade2+ grade3)/ 3;
    printf("average is %.2f \n",avg);

    if(avg>=90){
        printf("you got A grade");
    }
    else if(avg>=80){
        printf("you got B grade");
    }
    else if(avg>=70){
        printf("you got C grade");
    }
    else if(avg>=60){
        printf("you got D grade");
    }
    else (avg<=50){
        printf("you are dumb");
    }
}

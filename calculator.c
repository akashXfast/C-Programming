#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int ch;
float n1,n2;
    printf("\n--Welcome to easy calculate--");
    printf("\nChoose one of the following operations: ");;
    printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Square \n6.Exit");
    printf("\n\nEnter your choice : ");
    scanf("%d",&ch);
    
    switch(ch) {
        case 1: 
            {
                float sum = 0;
                printf("Enter two numbers for addition : ");
                scanf("%f %f",&n1,&n2);
                sum=n1+n2;
                printf("Sum of %f and %f is : %f",n1,n2,sum);
                break;
            }
        case 2: 
            {
                printf("Enter two numbers for subtraction : ");
                scanf("%f %f",&n1,&n2);
                float subtraction=n1-n2;
                printf("Subtraction of %f and %f is : %f",n1,n2,subtraction);
                break;
            }

        case 3: 
            {
                float mul =1;
                printf("Enter two numbers for multiplication : ");
                scanf("%f %f",&n1,&n2);
                if(n1==0 || n2==0){
                    mul=0;
                }
                else{
                    mul=1;
                    mul=n1*n2;
                }
                printf("Multiplication of %f and %f is : %f",n1,n2,mul);
                break;
            }

        case 4: 
            {
                printf("Enter two numbers for division : ");
                scanf("%f %f",&n1,&n2);
                if(n1==0){
                    float div=0;
                }
                else if(n2==0){
                    printf("Undefined");
                    break;
                }
                else{
                    float div=n1/n2;
                }
                printf("Division of %f and %f is: %f",n1,n2,div);
                break;
            }

        case 5: {
            printf("Enter two numbers for square : ");
            int n1, n2;
                scanf("%d %d",&n1,&n2);
                int square=pow(n1,n2);
                printf("Square of %d to the power %d is: %d",n1,n2,square);
                break;
        }

        case 6: 
                printf("exited");
                exit(0);

        default: 
                printf("Please choose between option 1 - 6...and try again ");




    }

    printf("\nOut of Program");

    return 0;
}
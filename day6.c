#include <stdio.h>
int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if( number >=10 && number <= 20 ){
        printf("The number is between 10 and 20");
    }
    else if(number ==5 || number == 25){
        printf(" ita a special no");}
    else{
        printf("The number is wroung");
    }    
    return 0;
}
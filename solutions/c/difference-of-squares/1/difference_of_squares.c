#include "difference_of_squares.h"


unsigned int sum_of_squares(unsigned int number){
    unsigned int n=number;
    unsigned int sum=0;
    unsigned int a;
    for( unsigned int i=1;i<=n;i++){
        a=i*i;
        sum=sum+a;
    }
    return sum;
}
unsigned int square_of_sum(unsigned int number){
    unsigned int n=number;
    unsigned int sum=0;
    for(unsigned int i=0;i<=n;i++){
        sum=sum+i;
    }
    sum=sum*sum;
    return sum;
    
}
unsigned int difference_of_squares(unsigned int number){

    unsigned int minus=square_of_sum(number) - sum_of_squares(number);
    return minus;
}
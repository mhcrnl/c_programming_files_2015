/*----------------------------------
    C++ perfect number program
    --------------------------------*/

#include <iostream>
#include <iomanip>
#include <stdio.h>

int main(void){
    int n, i=1, sum=0;
    std::cout << "Enter a number(enter q to quit): ";
    while(scanf("%d", &n)==1){
    while(i<n){
        if(n%i==0)
            sum=sum+i;
        i++;
    }
    if(sum==n)
        std::cout<< i<< " is a perfect number. ";
    else
        std::cout<< i<< " is not a perfect number";

    std::cout << "Enter a number(enter q to quit): ";
    }
     return 0;
}

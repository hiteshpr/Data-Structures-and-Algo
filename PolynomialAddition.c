#include <stdio.h>
#include <stdlib.h>
struct polynomial{
    int coe;
    int exp;
};

struct polynomial polyp[10];
struct polynomial polyq[10];
struct polynomial result[10];

int degreep,degreeq;

void inputData(){

    int i;

    printf("\n Enter polynomial p(x) \n");
    printf("\n Enter highest power: \n");
    scanf("%d",&degreep);

    for(i=0;i<=degreep;i++){
        printf("\nEnter the coeff of x^%d : ",i);
        scanf("%d",&polyp[i].coe);
        polyp[i].exp = i;
    }
    printf("\n p(x) is: \n");
    for(i=0;i<=degreep;i++){
        printf(" %dx^%d",polyp[i].coe,i);
        if(i!=degreep)
            printf("+");
    }

    printf("\n\n Enter polynomial q(x) \n");
    printf("\n Enter highest power: \n");
    scanf("%d",&degreeq);

    for(i=0;i<=degreeq;i++){
        printf("\nEnter the coeff of x^%d : ",i);
        scanf("%d",&polyq[i].coe);
        polyq[i].exp = i;
    }
    printf("\n q(x) is: \n");
    for(i=0;i<=degreeq;i++){
        printf(" %dx^%d",polyq[i].coe,i);
        if(i!=degreeq)
            printf("+");
    }
}

void addpoly(){
    int n=0;
    int i;
    if(degreep > degreeq){
        for(i=0;i<=degreeq;i++){   //add till smaller degree
            result[n].coe= polyp[i].coe + polyq[i].coe;
            result[n].exp = polyp[i].exp;
            n++;
        }
        for (i = degreeq+1; i<=degreep;i++){                     //add remaining elements
            result[n].coe = polyp[i].coe;
           result[n].exp = polyp[i].exp;
            n++;
            }
        }else{                  //if q(x) has higher degree
            for(i=0;i<=degreep;i++){   //add till smaller degree
                result[n].coe= polyp[i].coe + polyq[i].coe;
                result[n].exp = polyp[i].exp;
                n++;
            }
            for (i= degreep+1; i<=degreeq;i++){                     //add remaining elements
                result[n].coe = polyq[i].coe;
                result[n].exp = polyq[i].exp;
                n++;
            }

        }

    //displaying result
         printf("\n result(x) is: \n");

         for(i=0;i<n;i++){
            printf(" %dx^%d",result[i].coe,i);
            if(i!=n-1)
                printf("+");
            }
}

int main()
{
    inputData();
    addpoly();
    return 0;
}

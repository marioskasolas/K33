#include <stdio.h>
#include <stdlib.h>

int main(void){
    int r,c;
    printf("Insert : \n1| Number of rows \n2| Number of columns\n\n");
    scanf("%d %d",&r,&c);

    int**ptr;
    ptr = malloc(r * sizeof(int*));
    for(int i = 0; i < r;i++){
        ptr[i] = malloc(c * sizeof(int));
    }

    int counter = 0;
    for(int i = 0; i < r;i++){
        for(int j = 0; j < c;j++){
            printf("Insert value at [%d][%d]\n",i,j);
            scanf("%d",&ptr[i][j]);
            if(ptr[i][j] == 0) counter++;
        }

    }

    int total_dig = r * c;
    double pos;
    pos = (double)counter * 100.0 / (double)total_dig;
    if(pos >= 80.0) printf("Araios !");
    else printf("Oxi araios !");

}
#include <stdio.h> 
#include <math.h>

int main(){
    int rows, total = 0, NumSum = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int Data[rows];
    for (int i = 0; i<rows; ++i){
        printf("Enter value for %d: ", i+1);
        scanf("%d", &Data[i]);
    }

    for (int i = 0; i < rows; ++i){
        total = total + Data[i];
    }
    int avg = total / rows;

    int Numenator[rows];

    for (int i = 0; i < rows; ++i){
        Numenator[i] = Data[i]-avg;
        NumSum = NumSum + Numenator[i];
    }

    int SD = sqrt(pow(NumSum, 2)/avg);

    printf("%d", SD);
    
    return 0;
}
//C Program to Display Prime Numbers Between Intervals Using Function

#include <stdio.h>

int primeChecker(int ParticularValue){
    int j = 2;
    int flag = 1;
    for (j; j<=ParticularValue/2;++j){
        if (ParticularValue%j == 0){
            // printf("%d", ParticularValue);
            flag=0;
            break;
        }
    }
    return flag;
}

int main(){
    int StartNum, EndNum;
    printf("Initial value: ");
    scanf("%d", &StartNum);
    printf("End value: ");
    scanf("%d", &EndNum);

    if (StartNum > EndNum){
        int temp = StartNum;
        StartNum = EndNum;
        EndNum = temp;
    }

    for (StartNum; StartNum<=EndNum;++StartNum){
        int value = primeChecker(StartNum);

        if (value == 1){
            printf("%d\n", StartNum);
        }
    }
    return 0;
}

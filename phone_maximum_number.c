#include <stdio.h>

int main() {
    int phonenumber_nums[10];
    int i;
    int higher_num;
    int index;
    printf("set your phone number : ");
    for(i=0;i<=9;i++){
            scanf("%d", &phonenumber_nums[i]);
    }
    higher_num=phonenumber_nums[0];
    for(i=0;i<= 9;i++){
        if (phonenumber_nums[i]>=higher_num){
            higher_num=phonenumber_nums[i];
            index=i;
        }

    }
    printf("The higher num is : %d . With the index : %d",higher_num,index);
    return 0;
}

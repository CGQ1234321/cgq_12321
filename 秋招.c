#//include <iostream>
#include <stdio.h>

int level_11(char type, int index, int price, int num) {



    printf("%d: ", index);
    for (int i = 0; i < num; i++) {
        printf("%c", type);
    };
    printf(" %d", price);
    return 0;
}

int level_12(int total, int cash ,int sum) {

    //scanf("%d", &total);
    
    for (; sum < total; ) {
        scanf("%d", &cash);
        sum += cash;
    }
    printf("找零%d元", sum - total);
    return 0;
}

int level_13(char type, int index, int price,
    int num, int total, int cash, int sum) {
    char target = '0';
    int tongdaoNum = 0;
    int targetNum = 0;

    printf("请摆放货物，如A 3 7 5  货物A摆放在3号通道，单价为7元，摆放了5个\n");
    //摆放货物
    scanf("%c", &type);
    scanf("%d", &index);
    scanf("%d", &price);
    scanf("%d", &num);
    level_11(type, index, price, num);
    while (1) {            

        printf("请输入您要购买的货物，通道号以及数量\n");
        getchar();

        scanf("%c", &target);

        scanf("%d", &tongdaoNum);

        scanf("%d", &targetNum);
            if (num < 1) {
                printf("物品已售罄");
                break;
            }
            if (targetNum > num) {
                printf("你要购买的货物库存不足，请重新输入：(需小于等于 %d)\n",num);
                scanf("%d", &targetNum);
            }
            if (target != 'A') {
                printf("没有该货物\n");
                continue;
            }
            if (tongdaoNum != 3) {
                printf("该通道没有货物\n");
                continue;
            }           

            printf("请投币:\n");
            level_12(targetNum * total, cash, sum);
            num -= targetNum;
        

    }
    

    return 0;
}

int main()
{ //level 1-1
    char type = 'A';
    int index = 0;
    int price = 0;
    int num = 0;//货物数量
    int total = 7;//货物总价
    int cash = 0;//付的钱
    int sum = 0;//总共付的钱
   // level_11(type,index, price, num);

    //level_12(total,cash,sum);

    level_13(type, index, price, num, total, cash, sum);

}


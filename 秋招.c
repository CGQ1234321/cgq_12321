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
    printf("����%dԪ", sum - total);
    return 0;
}

int level_13(char type, int index, int price,
    int num, int total, int cash, int sum) {
    char target = '0';
    int tongdaoNum = 0;
    int targetNum = 0;

    printf("��ڷŻ����A 3 7 5  ����A�ڷ���3��ͨ��������Ϊ7Ԫ���ڷ���5��\n");
    //�ڷŻ���
    scanf("%c", &type);
    scanf("%d", &index);
    scanf("%d", &price);
    scanf("%d", &num);
    level_11(type, index, price, num);
    while (1) {            

        printf("��������Ҫ����Ļ��ͨ�����Լ�����\n");
        getchar();

        scanf("%c", &target);

        scanf("%d", &tongdaoNum);

        scanf("%d", &targetNum);
            if (num < 1) {
                printf("��Ʒ������");
                break;
            }
            if (targetNum > num) {
                printf("��Ҫ����Ļ����治�㣬���������룺(��С�ڵ��� %d)\n",num);
                scanf("%d", &targetNum);
            }
            if (target != 'A') {
                printf("û�иû���\n");
                continue;
            }
            if (tongdaoNum != 3) {
                printf("��ͨ��û�л���\n");
                continue;
            }           

            printf("��Ͷ��:\n");
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
    int num = 0;//��������
    int total = 7;//�����ܼ�
    int cash = 0;//����Ǯ
    int sum = 0;//�ܹ�����Ǯ
   // level_11(type,index, price, num);

    //level_12(total,cash,sum);

    level_13(type, index, price, num, total, cash, sum);

}


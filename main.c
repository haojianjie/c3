#include <stdio.h>

int main()
{
    char arr[100];
    int index = 0;
    printf("minganzifuguanlixitong\n");
    while (1)
    {
        int code;

        printf("1---zengjiaminganzici\n");
        printf("2---shanchuzuihouyigeminganci\n");
        printf("3---xianshiquanbuminganci\n");
        printf("4---tihuanshuruneirongzhaongdeminganci\n"); //把所有的敏感字符全部替换为*
        printf("5---tuichuxitong\n");

        printf("qingshuruxiangyingdegongnengbianhao\n");

        scanf("%d", &code);

        if (code == 1)
        {
        }
        if (code == 2)
        {
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("huiche,tuichuchengxu\n");
            break;
        }
    }

    return 0;
}
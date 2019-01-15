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
        printf("4---tihuanshuruneirongzhaongdeminganci\n"); 
        printf("5---tuichuxitong\n");

        printf("qingshuruxiangyingdegongnengbianhao\n");

        scanf("%d", &code);

        if (code == 1)
        {
            char a;
			char x;
			printf("qingshuruyaotianjiademinganzifu：\n");
			scanf("%c",&a);
			scanf("%c",&a);
			
			arr[index] = a;
			index++;

			printf("tianjiachenggong,dianjihuichejixcu\n");
			scanf("%c",&x);
			scanf("%c",&x);
        }
        if (code == 2)
        {
			char x;
			printf("shanchuzuihouyigeminganci\n");

			index--;

			printf("shanchuchenggong,dianjihuichejixu\n");
			scanf("%c",&x);
			scanf("%c",&x);
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
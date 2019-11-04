#include<stdlib.h>
int main(void)
{
	int mynumber;
	int yournumber;
	int i=0,p=0,n=8;//i为猜的次数,生命值n=8,5,3
	int win=0,choice=0;
	int flag=0;//flag=1为赢，flag=0为输
	char jixu='y';
	while(1)
	{
        printf ("[1]初级玩家\n");
        printf ("[2]中级玩家\n");
        printf ("[3]高级玩家\n");
        printf ("[4]超级玩家 \n");
        printf ("[0]退出\n"); 
		printf ("Enter choice: ");
        scanf ("%d", &choice);
		if (choice == 0)
			break; 
        switch (choice) {         
           case 1: n=8; break;
           case 2: n=5; break;
           case 3: n=3; break;
           case 4: n=1; break;
           default: n=8; break;
		}
		mynumber= (int)rand()%100;//生成一个随机数
		flag=0;
		p++;
		printf(" *******第%d盘********\n",p);
		printf("\n你的生命值为%d\n",n);
		for(i=1;i<=n;i++)
		{
			printf("输入你的数字(0~99):");
			scanf("%d",&yournumber);
			if(yournumber==mynumber)
			{
				printf("ok!你是对的!\n");
				win++;
				flag=1;
				break;
			}
			else
				if(yournumber>mynumber)
					printf("sorry,太大了\n");
				else
					printf("sorry,太小了\n");
		}
		if(flag==0)
		{
			win=0;
		}
		printf("你还继续玩吗？(y/n)");
		fflush(stdin);//清空键盘缓冲区
		scanf("%c",&jixu);//%c所有字符
		if(jixu=='n')
			break;
	
	return 0;
}
	
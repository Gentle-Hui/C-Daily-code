#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu(){
	printf("*************************************\n");
	printf("**********1.play   0.exit************\n");
	printf("*************************************\n");

}
//time函数能返回一个时间戳
void game(){
//电脑生成一个随机数然后猜数字
	int guess = 0;
	int ret = rand()%10+1;//因为randMAX太大，不适合游戏，任何数字模10余数都是0~9，所以大大减少游戏难度
	//printf("%d\n",ret);
	while (1){//while(1)指循环条件永远为1，永远为真
		printf("猜猜数字:>");
		scanf("%d",&guess);
		if (guess > ret){
			printf("猜大了\n");
		}else if (guess < ret){
			printf("猜小了\n");
		}
		else{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main(){

	int input = 0;
	//只能调用一次时间戳，不能频繁使用
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择:>");
		scanf("%d", &input);

		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);

	return 0;
}
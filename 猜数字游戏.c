#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu(){
	printf("*************************************\n");
	printf("**********1.play   0.exit************\n");
	printf("*************************************\n");

}
//time�����ܷ���һ��ʱ���
void game(){
//��������һ�������Ȼ�������
	int guess = 0;
	int ret = rand()%10+1;//��ΪrandMAX̫�󣬲��ʺ���Ϸ���κ�����ģ10��������0~9�����Դ�������Ϸ�Ѷ�
	//printf("%d\n",ret);
	while (1){//while(1)ָѭ��������ԶΪ1����ԶΪ��
		printf("�²�����:>");
		scanf("%d",&guess);
		if (guess > ret){
			printf("�´���\n");
		}else if (guess < ret){
			printf("��С��\n");
		}
		else{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main(){

	int input = 0;
	//ֻ�ܵ���һ��ʱ���������Ƶ��ʹ��
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);

	return 0;
}
#include<stdio.h>

void odd_num(int n[]);
void even_num(int n[]);

int main(void)
{
	int arr[5];
	int i;
	printf("5���� ������ �Է��ϼ���:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	odd_num(arr);
	even_num(arr);
	return 0;
}
void odd_num(int n[])
{
	int i;
	printf("Ȧ�� ���:");
	for (i = 0; i < 5; i++)
	{
		if (n[i] % 2 == 1)
			printf("%d", n[i]);
	}
	printf("\n");
}
void even_num(int n[])
{
	printf("¦�� ���:");
	for (int i = 0; i < 5; i++)
	{
		if (n[i] % 2 == 0)
			printf("%d", n[i]);
	}
	printf("");
}
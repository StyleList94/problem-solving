/* ���� 2839 ������� */

#include<stdio.h>

int main(void)
{
	int weight; // ����
	int n; // ���� �� �ִ� 5kg ��������
	int tmp; // ����- (5kg ���� ����)
	int count = -1; // ���� �� ����
	scanf("%d", &weight); // �Է¹���
	n = weight / 5; // 5kg ���� �ִ� ����
	while (n >= 0) // 5kg ������ ���� �� ���� �� ����
	{
		tmp = weight - (n * 5); // ���� - (5kg ���� ����)
		if (tmp % 3 == 0) // �� ���� 3���� ������ ��������
		{
			count = n + tmp / 3; // ���� 5kg �������� + 3kg ���� ����
			break; // ��� �������Ƿ� ���� ��������
		}
		n--; //�ȳ��������� 5kg ���� �ϳ� ��
	}
	//���� ���� �� ���� if�� false�̸� ������ ��Ȯ�� ���� �� ����.
	printf("%d", count); // ���� ���
}
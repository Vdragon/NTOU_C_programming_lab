//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Practice 3-2�C
//�{���ԭz(Program Description)�G[Basic] Practicing Loops Ask the user to input a positive number.Loop until he gives a positive number. ([Hint] Use while-statements.)Print out the sqaures, the cubes of the numbers from 1 to this number. ([Hint] Use for-statements.)�C
//�{������(Program Version)�G1.00(0)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G9
//�̷s��s����(Latest Update Log)�Gbuild ok�C
/*
��L(Other)�G�C
*/
//��s����(Change Log)�G�C
//--------------�`�N�ƶ�--------------
/*
��.�C�@�yStatement�᭱�����y;�z
��.�O�oReturn 0;
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//--------------�ŧi�P�w�q(Declaration & Definition)--------------
int num = -1,i;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
//���D
//�����G1.00(1)
printf("�{���W��(Program Name)�GC Programming Practice 3-2�C\n");
printf("�{���ԭz(Program Description)�G\n[Basic] Beaufort Scale Write a program that asks the use rto enter a wind speed (in knots), the display the corresponding description. (Selected from the text book, Program Project 4, Chapter 5, p96.)�C\n");
printf("�{������(Program Version)�G1.00(0)\n");
printf("�{���׭q��(Program Revision Number)�G\n");
printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//input
while (num <= 0)
{
	printf("�п�J����ơG");
	scanf("%d", &num);
}
//�e����X
//�����G1.00(0)

//title
	printf("x\tx^2\tx^3\n");
	
//for
for (i=1;i<=num;i++)
{
	printf("%d\t%d\t%d\n",i,i*i,i*i*i);

}
//�ϵ{���Ȱ��B��
//�����G1.00(7)

	//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
      //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		//system("pause");

	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
      printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		//���M��imput buffer
         //��k�@
            int ch;
            while ((ch = getchar()) != EOF && ch != '\n');
         //��k�G
            //scanf("%*[^\n]");
            //scanf("%*c");
		fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^

		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}

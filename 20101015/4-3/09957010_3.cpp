//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Practice 4-3�C
//�{���ԭz(Program Description)�G# [Advanced] Reducing a Fraction to Lowest Terms  (Programming Project 6.3 in the text book) \nWrite a program that asks the user to enter a fraction, then reduces the fraction to lowest terms: �C
//�{������(Program Version)�G1.00(0)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G9
//�̷s��s����(Latest Update Log)�G�C
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
int scanfTriggered = 0;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
		
//���D
//�����G1.00(1)
printf("�{���W��(Program Name)�GC Programming Practice 4-3�C\n");
printf("�{���ԭz(Program Description)�G\n# [Advanced] Reducing a Fraction to Lowest Terms  (Programming Project 6.3 in the text book)\nWrite a program that asks the user to enter a fraction, then reduces the fraction to lowest terms: �C\n");
printf("�{������(Program Version)�G1.00(0)\n");
printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//�ϵ{���Ȱ��B��
//�����G1.00(7)
	//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
      //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		//system("pause");

	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
      printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		//���M��imput buffer
         //��k�@
            //int ch;
            //while ((ch = getchar()) != EOF && ch != '\n');
         //��k�G
         if (scanfTriggered ==1)
         {
			//scanf("%*[^\n]");
            //scanf("%*c");
		 }
		
		fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^

		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}

//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Practice 3-1�C
//�{���ԭz(Program Description)�G[Basic] Beaufort Scale Write a program that asks the use rto enter a wind speed (in knots), the display the corresponding description. (Selected from the text book, Program Project 4, Chapter 5, p96.)Here's a simplified version of the Beaufort scale: �C
//�{������(Program Version)�G1.00(1)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G9
//�̷s��s����(Latest Update Log)�Gdebug imput�C
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
int windSpeed;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
 //���D
//�����G1.00(1)
printf("�{���W��(Program Name)�GC Programming Practice 3�C\n");
printf("�{���ԭz(Program Description)�G\n[Basic] Beaufort Scale Write a program that asks the use rto enter a wind speed (in knots), the display the corresponding description. (Selected from the text book, Program Project 4, Chapter 5, p96.)Here's a simplified version of the Beaufort scale:�C\n");
printf("�{������(Program Version)�G1.00(0)\n");
printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//input
	printf("�п�J���t�G");
	scanf("%d", &windSpeed);
	
//think

if(windSpeed<1)
      {
	printf("�L�� Calm\n�Ϫ��W\n");
      }
else if(windSpeed <= 3)
{
	printf("�n�� Light Air\n�ȷϯ��ܭ��V�A��������ʭ��СC\n");
}
else if(windSpeed <= 27)
{
	printf("�L�� Breeze\n�Фg�θH�ȳQ���j���A�𤧪K���n�ʡC\n");
}
else if(windSpeed <= 47)
{
	printf("�j�� Gale\n����n�ʡA�p��K�Q�j��A�樫�x���C\n");
}
else if(windSpeed <= 63)
{
	printf("�g�� Storm\n��Q���ް_�A�γ��i��|�Q�j½�C\n");
}
else 
{
	printf("���� Hurricane\n�䭷�ӰաIHere comes a typhoon!!\n");
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

//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Practice 5-3[Advanced] Astrology�C
//�{���ԭz(Program Description)�GWrite a program to determine the astrological sign (�P�y) of a user.�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G14
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

//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(5)
//�n�骺�B��qmain��ƶ}�l
	int main(void)
	{
      //�ŧi�P�w�q(Declaration & Definition)
      int scanfTriggered = 0;
      int inputMonth, inputDay, beginningDay[12] = {21,21,21,22,23,23,23,23,22,22,20,20};
      int zodiacCode;
    char * chiName[12] = {"�d�Ϯy","�����y","���l�y","���ɮy", "��l�y", "�B�k�y", "�ѯ��y","���Ȯy","�g��y", "���~�y", "���~�y","�����y"};
//���D
//�����G1.00(3)
      printf("�{���W��(Program Name)�GC Programming Practice 5-3[Advanced] Astrology�C\n");
      printf("�{���ԭz(Program Description)�G\nWrite a program to determine the astrological sign (�P�y) of a user.�C\n");
      printf("�{������(Program Version)�G1.00(0)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");

//prompt
    printf("�п�J��� (�H ��/�� ���榡)�G");
    scanfTriggered = 1;
    scanf("%d/%d", &inputMonth, &inputDay);
//test ok
//printf("%d\n%d", inputMonth, inputDay);

//think
if(inputDay < beginningDay[inputMonth - 1])
{
    inputMonth--;
}

zodiacCode = (inputMonth - 3 + 12) %12 ;

//test ok
//printf("%d", zodiacCode);

//output
    printf("�A�O%s���A�P�y�N�X�O %d�C",chiName[zodiacCode], zodiacCode);
//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�����G1.00(14)
	//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
      //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		//system("pause");
	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
      printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		//���M��imput buffer
         //��k�@
         /*
            int ch;
            while ((ch = getchar()) != EOF && ch != '\n');
         */
         //��k�G
         //�ݥ���w�qint scanfTriggered = 0;
         if (scanfTriggered ==1)
         {
			scanf("%*[^\n]");
            scanf("%*c");
		 }


		fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^


		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}


//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G Getting Digits in a Three-digit Number �C
//�{���ԭz(Program Description)�GAsk the user to give a three-digit number and print the number with white spaces between digits.�C
//�{������(Program Version)�G1.00(1)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G8
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
//�����G1.00(2)
	int main(void)
	{
        int oriInput,num1,oriOutput1,oriOutput2,num2,num3;
              int scanfTriggered = 0;
        //pre
        printf("[Basic] Getting Digits in a Three-digit Number\nAsk the user to give a three-digit number and print the number with white spaces between digits.\n");
        //input
        printf("�п�J�@�ӤT��ƪ��Ʀr�G");
        scanfTriggered = 1;
       	scanf("%d", &oriInput);
       	//num1
       	num1 = oriInput % 10;
       	//printf("%d",num1);
       	//num
       	oriOutput1 = oriInput / 10;
       	num2 = oriOutput1 % 10;
       	//printf("%d",num2);
       	//num3
       	oriOutput2 = oriOutput1 /10;
       	num3 = oriOutput2 % 10;
       	//printf("%d",num3);
       	//print
       	printf("%d %d %d",num3,num2,num1);

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

//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Practice 6-3 [Advanced] Getting Prime Numbers �C
//�{���ԭz(Program Description)�GWrite a program to find the first 100 prime numbers and save them in an array.�C
//�{������(Program Version)�G1.00(1)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G14
//�̷s��s����(Latest Update Log)�G�ﵽ�C
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
    int scanfTriggered = 0, primeTotal = 1 , count1 = 0, testNum = 3;
    int array[100] = {2};
//���D
//�����G1.00(3)
      printf("�{���W��(Program Name)�GC Programming Practice 6-3 [Advanced] Getting Prime Numbers �C\n");
      printf("�{���ԭz(Program Description)�G\nWrite a program to find the first 100 prime numbers and save them in an array.�C\n");
      printf("�{������(Program Version)�G1.00(0)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");

    while(1)
    {
        //count1�k�s
        count1 = 0;
        		//test
				//printf("for %d", testNum);
		while( 1 )
		{		//�T�w�Ҧ�����Ƴ��]��
				//test
				//printf("while %d", testNum);
			if(testNum % array[ count1 ] == 0)
				{//���լO�_���w����ƪ�����
					break;
				}
			if( count1 + 1 == primeTotal)
				{//�w���ը�̫�@�ӽ�Ƨ����O��ƪ�����
					//test
					//printf("if %d\n", testNum);
				//assign �U�@�Ӱ}�C���ӽ��
				array[ count1 + 1 ] = testNum;//�]testNum�O��ơ^
				//up Count//
				primeTotal++;
				//break while
				break;
				}
            //���U�@�Ӥw�����
			count1++;
		}
		if(primeTotal == 100)
			{//�p�G�o��100�ӽ��
				break;
			}
    //���խȧ�
    testNum++;
    }

//debug
	for( count1 = 0 ; count1 < 100 ; count1++)
	{
		printf("%3.d  %d\n",count1 + 1, array[count1]);
	}























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

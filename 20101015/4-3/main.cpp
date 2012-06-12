//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G[Advanced] Reducing a Fraction to Lowest Terms (Programming Project 6.3 in the text book)�C
//�{���ԭz(Program Description)�GWrite a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:�C
//�{������(Program Version)�G1.00(1)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G12
//�̷s��s����(Latest Update Log)�G�h���h�l�ܼơC
/*
��L(Other)�G���[�J���s�ư��C
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

//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
int scanfTriggered =  0;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(4)
//�n�骺�B��qmain��ƶ}�l
	int main(void)
	{
//���D
//�����G1.00(2)
printf("�{���W��(Program Name)�G[Advanced] Reducing a Fraction to Lowest Terms (Programming Project 6.3 in the text book)�C\n");
printf("�{���ԭz(Program Description)�G\nWrite a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:�C\n");
printf("�{������(Program Version)�G1.00(1)\n");
printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//�ŧi�P�w�q(Declaration & Definition)
   int oriBeDivided, oriDividedBy;
   int n1, n2;
   int mem;
   int gcd;
//1-1prompt
   printf("�п�J�@�Ӥ��� (�榡 a/b)�G");
   scanf("%d/%d", &oriBeDivided, &oriDividedBy);
      //test��ok
      //printf("%d/%d\n", oriBeDivided, oriDividedBy);

//1-2made a changeable copy, the old one for calc the output
   n1 = oriBeDivided;
   n2 = oriDividedBy;

//2-1����۰��k
//2-1.1�����GCD�O���@��
   if(n1 == n2)
      {
         gcd = n1;
         //test��ok
         //printf("2-1.1\n");
         //printf("%d\n", gcd);
      }
      //2-1.2n1�j��n2��while loop
      else if(n1 > n2)
         {
            while(n1 % n2 != 0)
            {
               //test��ok
               //printf("while in\n");
               //�ƥ�n1
               mem = n1;
               n1 = n2;
               n2 = mem % n2;
            }
            //test��ok
            //printf("while out\n");
            gcd = n2;
         }
      //2-1-3n1�p��n2��while loop
      else
         {
            while(n2 % n1 != 0)
            {
               //test��ok
               //printf("while in\n");
               //�ƥ�n1
               mem = n2;
               n2 = n1;
               n1 = mem % n1;
            }
            //test��ok
            //printf("while out\n");
            gcd = n1;
         }
//3-1 ��������l���O���HGCD�A��X��²����
printf("�����ᦨ�� %d/%d", oriBeDivided / gcd, oriDividedBy / gcd);
//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�����G1.00(13)
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
         //�ݥ���w�qint scanfTriggered = 1;

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

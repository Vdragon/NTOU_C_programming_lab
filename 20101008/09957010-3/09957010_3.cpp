//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Practice 3-3�C
//�{���ԭz(Program Description)�G[Advanced] �Τ@�o������t�� Uniform-Invoice Prize .Ask the user to enter a number on a uniform-invoice. Check if he or she has won any prize.�C
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
#define FIRST_PRIZE 81674526
//--------------�ŧi�P�w�q(Declaration & Definition)--------------
int imput = 100000000;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{
 //���D
//�����G1.00(1)
printf("�{���W��(Program Name)�GC Programming Practice 3�C\n");
printf("�{���ԭz(Program Description)�G\n[Advanced] �Τ@�o������t�� Uniform-Invoice Prize �CAsk the user to enter a number on a uniform-invoice. Check if he or she has won any prize.\n");
printf("�{������(Program Version)�G1.00(0)\n");
printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//input
printf("�п�J�A���o�����X�G");
scanf("%d", &imput); 
while(imput >99999999)
{
printf("�o�����X���i�H�W�L�K��ơC\n");      
printf("�п�J�A���o�����X�G");
scanf("%d", &imput); 
}

//think output
if(imput == FIRST_PRIZE)
      {
    printf("���ߡI�A���F�Y���I \n");  
      }
else if(imput %10000000 == FIRST_PRIZE%10000000)
{
    printf("���ߡI�A���F�G���I \n");  
}
else if(imput %1000000 == FIRST_PRIZE%1000000)
{
    printf("���ߡI�A���F�T���I \n");  
}
else if(imput %100000 == FIRST_PRIZE%100000)
{
    printf("���ߡI�A���F�|���I \n");  
}
else if(imput %10000 == FIRST_PRIZE%10000)
{
    printf("���ߡI�A���F�����I \n");  
}

else if(imput %1000 == FIRST_PRIZE%1000)
{
    printf("���ߡI�A���F�����I \n");  
}
else
      {

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
            //int ch;
            //while ((ch = getchar()) != EOF && ch != '\n');
         //��k�G
            scanf("%*[^\n]");
            scanf("%*c");
		fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^

		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}

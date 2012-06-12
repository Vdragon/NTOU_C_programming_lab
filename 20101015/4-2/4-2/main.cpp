//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Practice 4-2�C
//�{���ԭz(Program Description)�G[Basic] Printing Graphs Ask the user to give the length of the edge and print the following graphs.�C
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
int scanfTriggered = 0;
//--------------�D�n�{���X(Main Code)--------------
//�D��Ƭ[�c
//�����G1.00(3)
	int main(void)
	{

//���D
//�����G1.00(1)
printf("�{���W��(Program Name)�GC Programming Practice 4-2�C\n");
printf("�{���ԭz(Program Description)�G\n[Basic] Printing Graphs \nAsk the user to give the length of the edge and print the following graphs.�C�C\n");
printf("�{������(Program Version)�G1.00(0)\n");
printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//def
int lines, x1, y1;

//loop & output
	//�ù���X
	//�����G1.00(4)
	//�\��G�b��Ц�m�B��X�r��
	/*�Ϊk�]���βŸ���䤺�����e�Ҭ����ѡ^�G
	printf("�y�ù���X�����e�]�]�AFormat conversion�榡�ഫ�r����Escape sequence����ǦC�r���^�v, �u�榡�ഫ�r���N���ܼƦW�]�h���ܼƫh�H�r�����}�A�e���ܼƤ��O�����e�ᤣ�P���榡�ഫ�š^�z");
	*/
	/*Escape sequence�d�ҡG
	   \n��(new line)����r���A�۷����J�e�Ӣ���������f��
	   \t��(tab)��X�@��[tab]
	   \a��(alarm)�o�X�@�Өt���n��
	   \\��(black slash)��X�@�Ӥϱ׽u (\)
	   \"��(double quote)��X�@��double quote(")
	*/
	/*Format conversion�d�ҡG
	   %d��(decimal number)�Q�i����
	   %f��(float number)�B�I��
	   %lf
	   %.2f
	*/
		printf("�п�J����G");
	//�q��L��J
	//�����G1.00(3)
	//�\��G�b��Ц�m�B��X�r��
	/*�Ϊk�]���βŸ���䤺�����e�Ҭ����ѡ^�G
	scanf("�y��L��J�����e�]�]�AFormat conversion�榡�ഫ�r���^�v,  &�u�榡�ഫ�r���N���ܼƦW�z");
	*/
	/*Format conversion�d�ҡG
	   %d��(decimal number)�Q�i����
	   %f��(float number)�B�I��
	   %lf
	   %.2f
	*/
	//�T�{scanf������A�y����Lbuffer��������Ÿ����s�b
	scanfTriggered = 1;
		//
		scanf("%d", &lines);

//print1
for(y1 = 1 ;y1 <= lines ;y1++ )
{
    for(x1 = 1 ;x1 <= lines ;x1++ )
    {
        if((x1 + y1) % 2 == 1)
      {
//print x1
//printf("%d",x1);
//print y1
//printf("%d",y1);
            printf("��");
      }
      else
      {
//print x1
//printf("%d",x1);
//print y1
//printf("%d",y1);
           printf("�C");
      }
    }
//Y���W�@�ɪ�����
printf("\n");
}

//Print1 �� Print2 ����������
printf("\n");

//print2
//def
int x2, y2;

//print
for(y2 = 1 ;y2 <= lines  ;y2++ )
{
	for(x2 = 1 ;x2 <= lines ;x2++ )
	{
     if(x2 - y2 > 0 && x2 + y2 -1 < lines)
      {
//print x2
//printf("%d",x2);
//print y2
//printf("%d",y2);
		//�ù���X
		//�����G1.00(4)
		//�\��G�b��Ц�m�B��X�r��
		/*�Ϊk�]���βŸ���䤺�����e�Ҭ����ѡ^�G
		printf("�y�ù���X�����e�]�]�AFormat conversion�榡�ഫ�r����Escape sequence����ǦC�r���^�v, �u�榡�ഫ�r���N���ܼƦW�]�h���ܼƫh�H�r�����}�A�e���ܼƤ��O�����e�ᤣ�P���榡�ഫ�š^�z");
		*/
		/*Escape sequence�d�ҡG
		   \n��(new line)����r���A�۷����J�e�Ӣ���������f��
		   \t��(tab)��X�@��[tab]
		   \a��(alarm)�o�X�@�Өt���n��
		   \\��(black slash)��X�@�Ӥϱ׽u (\)
		   \"��(double quote)��X�@��double quote(")
		*/
		/*Format conversion�d�ҡG
		   %d��(decimal number)�Q�i����
		   %f��(float number)�B�I��
		   %lf
		   %.2f
		*/
			printf("��");
      }
      else if(x2 - y2 < 0 && x2 + y2 -1 > lines)
      {
//print x2
//printf("%d",x2);
//print y2
//printf("%d",y2);
		//�ù���X
		//�����G1.00(4)
		//�\��G�b��Ц�m�B��X�r��
		/*�Ϊk�]���βŸ���䤺�����e�Ҭ����ѡ^�G
		printf("�y�ù���X�����e�]�]�AFormat conversion�榡�ഫ�r����Escape sequence����ǦC�r���^�v, �u�榡�ഫ�r���N���ܼƦW�]�h���ܼƫh�H�r�����}�A�e���ܼƤ��O�����e�ᤣ�P���榡�ഫ�š^�z");
		*/
		/*Escape sequence�d�ҡG
		   \n��(new line)����r���A�۷����J�e�Ӣ���������f��
		   \t��(tab)��X�@��[tab]
		   \a��(alarm)�o�X�@�Өt���n��
		   \\��(black slash)��X�@�Ӥϱ׽u (\)
		   \"��(double quote)��X�@��double quote(")
		*/
		/*Format conversion�d�ҡG
		   %d��(decimal number)�Q�i����
		   %f��(float number)�B�I��
		   %lf
		   %.2f
		*/
			printf("��");
      }
      else
      { 
//print x2
//printf("%d",x2);
//print y2
//printf("%d",y2);
      	printf("�C");
		}
	}

printf("\n");
}

//�СССССССССССССССССССССССССССССССССССССССС�
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
			scanf("%*[^\n]");
            scanf("%*c");
		 }
		fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^

		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;

}

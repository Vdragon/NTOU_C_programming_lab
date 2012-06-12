//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Practice 4-1�C
//�{���ԭz(Program Description)�G[Basic] ���H�I�L General Han Counting Soldiers���H�I�L�A�L�����ơA�T�T�Ƥ��ѤG�A�����Ƥ��ѤT�A�C�C�Ƥ��ѤG�C�ݧL�X�H�HAsk the user to guess a number whose remainders when divided by 3, 5, and 7 are 2, 3, and 2, respectively.how many times does the user guess until he gives the correct answer.Give an appropriate comment accoring to hus guessing time.�C
//�{������(Program Version)�G1.00(1)
//�{���׭q��(Program Revision Number)�G
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G9
//�̷s��s����(Latest Update Log)�Gbuild ok�C
/*
��L(Other)�G�C
*/
/*��s����(Change Log)�G�C
1.00(0)build ok
1.00(1)revise title
*/
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
printf("�{���W��(Program Name)�GC Programming Practice 4-1�C\n");
printf("�{���ԭz(Program Description)�G\n[Basic] ���H�I�L General Han Counting Soldiers\n���H�I�L�A�L�����ơA�T�T�Ƥ��ѤG�A�����Ƥ��ѤT�A�C�C�Ƥ��ѤG�C�ݧL�X�H�H\nAsk the user to guess a number whose remainders when divided by 3, 5, and 7 are 2, 3, and 2, respectively.Count how many times does the user guess until he gives the correct answer.Give an appropriate comment accoring to hus guessing time.�C\n");
printf("�{������(Program Version)�G1.00(1)\n");
printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
printf("�СССССССССССССССССССССССССССССССС�\n");

//def
int inputAns, counterAsk = 0;

//counter 1st
counterAsk++;
//prompt
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
printf("�вq�@�ӳQ 3 ���l 2�B�Q 5 ���l 3�B�Q 7 ���l 2 ���ơG");
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
scanf("%d", &inputAns);
//test
//printf("%d", inputAns);

//think
while(!(inputAns % 3 == 2 && inputAns % 5 == 3 && inputAns % 5 == 3))
{
//counter
counterAsk++;

//wrong output
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
printf("���I\n");
//prompt
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
printf("�вq�@�ӳQ 3 ���l 2�B�Q 5 ���l 3�B�Q 7 ���l 2 ���ơG");
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
scanf("%d", &inputAns);
}
//finish
if(counterAsk == 1)
{
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
printf("�z�I�@���N�q���I�W�j�I");
}
else if(counterAsk >= 2 && counterAsk <= 5)
{
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
printf("�q�F%d���~�q��A���ݥ[�j�C", counterAsk);
}
else
{
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
printf("�q�F%d���~�q��A�S�H��A�j�C", counterAsk);
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

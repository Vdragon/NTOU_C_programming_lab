//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Practice 7-3�C
//�{���ԭz(Program Description)�G[Advanced] Guessing Number by m-A-n-B hints�CThe hidden answer is a four-digit no-repetition number. (0 can be its leading digit.)The program will ask the user to guess a number and response a hint.m-A means m digits in the guessing number are correct, and their positions are correct, too.n-B means n digits in the guessing number are correct, but their positions are incorrect.
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G15
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

//C Standard General Utilities Library
//�����G1.00(0)
	#include <stdlib.h>
	/*
	for SYSTEM("pause") if working
	�DWindows�t�νT�w����ϥΡ]�]���L�Өt�Ϋ��O�^
	*/

//Date and time functions Library
//�����G1.00(0)
	/*
	for srand()
	*/
	#include <time.h>
//--------------�D�n�{���X(Main Code)--------------
//func. for assign rand array  +srand need time &syslib�]�ڰO�o�}�C�n���O�Ѣ�����@��B�@�����������D�D�D�^OK
//input var. numInArray
//return single Rand
short int setHidden(void)
	{
			/*bad
			short int counterA;//for loop -assign
			short int hidden[numInArray];//assign
			*/


			/*bad
			//for loop -assign
			for(counterA = 0;counterA < numInArray ;counterA++)//run array times
			{
				//assign
				hidden[counterA] = rand() %10;
																								//test ok
																								printf("%hd",hidden[counterA]  );
			}
			*/

			//test ok
			//printf("               %hd", rand());

			//return single Rand
			return (rand() % 10);
	}
//�D��Ƭ[�c
//�����G1.00(5)
//�n�骺�B��qmain��ƶ}�l
	int main(void)
	{
      //�ŧi�P�w�q(Declaration & Definition)
short int scanfTriggered = 0;//�ϵ{���Ȱ��B��
short int input;//prompt var. input 4num int(ok)
short int numInArray = 4, hidden[numInArray];//prompt var. input 4num int(ok)
short int counterTest = 0;//for test
			//init rand(main�̭��~����= =)
			srand((unsigned)time(NULL));
//���D
//�����G1.00(3)
      printf("�{���W��(Program Name)�GC Programming Practice 7-3�C\n");
      printf("�{���ԭz(Program Description)�G\n[Advanced] Guessing Number by m-A-n-B hints\nThe hidden answer is a four-digit no-repetition number. (0 can be its leading digit.)\nThe program will ask the user to guess a number and response a hint.\nm-A means m digits in the guessing number are correct, and their positions are correct, too.\nn-B means n digits in the guessing number are correct, but their positions are incorrect.�C\n");
      printf("�{������(Program Version)�G1.00(0)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");

//call set hiddenfunc. func
short int counterA;//for loop -assign
			for(counterA = 0;counterA < numInArray ;counterA++)//run array times
			{
			hidden[counterA] = setHidden();
			//test
			//printf("            %hd\n", setHidden() );
			}

//test

for(counterTest = 0; counterTest < numInArray; counterTest++)
{
printf("            %hd",hidden[counterTest] );
}


/*
//prompt var. input 4num int(ok)
	printf("�вq�@�ӥ|��Ƥ����Ъ��Ʀr�G");//ask
		scanfTriggered = 1;
		scanf("%hd", &input);//assign to input



//output correct(ok)
	printf("�q��F�I ");//cong.message

*/






//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�����G1.00(15)
	//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
      //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		//system("pause");
	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
      printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		//���M��imput buffer
         //��k�@
         /*
            short int ch;
            while ((ch = getchar()) != EOF && ch != '\n');
         */
         //��k�G
         //�ݥ���w�q
         //short int scanfTriggered = 0;

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

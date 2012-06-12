//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Practice 7-2[Basic] Printing a Calendar for a Year �C
//�{���ԭz(Program Description)�GWrite a program that prints a one-year calendar.The user enters which year's calendar he wants, and specifies the day of the week on which the year begins. �C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G14
//�̷s��s����(Latest Update Log)�G�C
/*
��L(Other)�G

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


//�|�~�T�w�Ҷ�
//��Jyear�~��
//�Ǧ^�O�_
bool isLeapYear(int year)
{
	//�P�_�{�|�h�|
    if (year % 4 == 0)//�p�G4
    {
																																						//test
																																						//printf("4 in\n");
			//�P�_�{�ʤ��|
        if(year % 100 == 0)//�p�G100
        {
																																						//test
																																						//printf("100 in\n");
            //�P�_�{400�|
            if(year % 400 == 0)//�p�G400
            {
																																									 //test
																																									 //printf("400 in\n");
                return true;//�O�|break
            }
            return false;//���|break
        }
        return true;//�O�|break
    }
    else//�D�h
    {
        return false;//4���|break
    }
}


//��X�̫��Ҷ�
//���� year�~ month ��
short int lastDate(int year,int month)
{
	//�w�q�Ҧ���}�C
    short int allDate[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	//�հʽT�{�|�~
    if(isLeapYear(year))//�p�G�O�|
    {
        allDate[1] = 29;//2�릳29��
    }

    //�^�ǳ̫��s��
    return allDate[month - 1];

}


//��X���Ҷ�
//�����Ѽ� days(�o�Ӥ몺�Ѽ�) startWkDay (�P���X�N����m)
short int printMonthCaldr(short int days, short int startWkDay)
{
short int counterBlank, countDate;
//int calDate, counterBlank, date;

	//��X�e�褧�ť� �Ѽ� counterBlank�ťռ�  startWkDay ��X��m
    for(counterBlank = 0 ; counterBlank < startWkDay ; counterBlank++)
    {
            printf("   ");
    }

//for loop 1~last -output ��� �Ѽ� countDate startWkDay ��X��m
    for(countDate = 1 ; countDate <= days ; countDate++)
			{
				//�P�_��X��m
			   if(startWkDay > 6)//�p�G�ثe��X��m��7
						 {
						 	 printf("\n");//�N����
						 	 startWkDay = 0;//��X��m�k�s
						 }
				//print��
			 printf("%2hd ", countDate);
			 //��m���W�����L����m
			 startWkDay++;
			}
	  //��������
	  printf("\n\n");

//�P�_�U���m
			   if(startWkDay > 6)//�p�G�U�ӿ�X��m��7
						 {
						 	 startWkDay = 0;//��X��m�k�s
						 }

 //�Ǧ^�U���m
 return startWkDay;
}



	int main(void)
	{
      //�ŧi�P�w�q(Declaration & Definition)
        short int scanfTriggered = 0;
        short int year, startWkDay;
        short int month;

//���D
//�����G1.00(3)
      printf("�{���W��(Program Name)�GC Programming Practice 7-2[Basic] Printing a Calendar for a Year �C\n");
      printf("�{���ԭz(Program Description)�G\nWrite a program that prints a one-year calendar.\nThe user enters which year's calendar he wants, and specifies the day of the week on which the year begins.�C\n");
      printf("�{������(Program Version)�G1.00(0)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");


//�߰�year�~ startWkday�P���X�N����m
printf("�аݭn�L���@�~�����G");
scanfTriggered = 1;
scanf("%hd", &year);
printf("2000 �~ 1 �� 1 ��O�P���X(0 ��ܬP���ѡB1 ��ܬP���@�A�̦�����)�H");
scanfTriggered = 1;
scanf("%hd", &startWkDay);

//output �W�誺��r
printf("\n%d �~���\n\n", year);


//�հʿ�X���Ҷ�
//�q�@���12��
for(month = 1 ;month <= 12 ;month++ )
{
	//��X���Y �Ѽ� ��W
	const char * monthName[12] = {"�@","�G","�T","�|", "��", "��", "�C", "�K", "�E", "�Q", "�Q�@", "�Q�G"};
    printf("�i%s��j\n�� �@ �G �T �| �� ��\n", monthName[month - 1]);
	//�Ҷ�*12
	//�����s��m
   startWkDay = printMonthCaldr(lastDate(year, month), startWkDay);
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

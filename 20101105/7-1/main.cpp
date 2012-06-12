//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Practice 7-1�C
//�{���ԭz(Program Description)�G[Basic] Writing Functions �C
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
bool isLeapYear(short int year)
{
if (year % 4 == 0)
{
    	//printf("4 in\n");
    if(year % 100 == 0)
    {
        //printf("100 in\n");
        if(year % 400 == 0)
        {
            //printf("400 in\n");
            return true;
        }
        return false;
    }
    return true;
}
else
{
    return false;
}
}

//check legal func.
//input YMD
bool isLegalDate(short int year, short int month, short int day)
{
	//allday of month array
    short int fineDate[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(isLeapYear(year))//if is Leap year
    {
        fineDate[1] = 29;	//assign Feb to 29 days
    }

//legal?
    if(month < 1 || month > 12)//if month illegal
    {
																							//�k�s
																							//fineDate[1] = 28;//cause func.init everytime so not ness.
        return false;//illegal date
    }

    if(day < 1 || day > fineDate[month - 1])//if day illegal
    {
																									//�k�s
																									//fineDate[1] = 28;//cause func.init everytime so not ness.
		  return false;//illegal date
    }
    //�k�s
    fineDate[1] = 28;

    //output bool
    return true;
}
	int main(void)
	{
      //�ŧi�P�w�q(Declaration & Definition)

const char * trueWord[2] = {"���O","�O"};
short int scanfTriggered = 0;
short int month, day, year;

//���D
//�����G1.00(3)
      printf("�{���W��(Program Name)�GC Programming Practice 7-1�C\n");
      printf("�{���ԭz(Program Description)�G\n[Basic] Writing Functions �C\n");
      printf("�{������(Program Version)�G1.00(0)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");
//test
/*
printf("�п�J�����ժ��~���G");
scanfTriggered = 1;
scanf("%d", &year);

if(isLeapYear(year) == true)
{
    printf("LY!");

}
else
{
        printf("noLY!");
}
*/

//input
/*
printf("�п�J�����ժ����(yy,dd)�G");
scanfTriggered = 1;
scanf("%d/%d", &month, &day);
    //think
        printf("%d�~%d��%d��%S�X�k����C\n", year, month, day, trueWord[isLegalDate(year, month, day)]);
*/

//prompt par month day
printf("�п�J�����ժ����(yr = 1899~1905)(mm/dd)�G");
scanfTriggered = 1;
scanf("%hd/%hd", &month, &day);

//loop output1-par year
for( year = 1899; year <= 1905;year++ )
{
																																				 //test
																																				 //printf("%d", trueword)
	 //call check and word func
    printf("%hd�~%hd��%hd��%s�X�k����C\n", year, month, day, trueWord[isLegalDate(year, month, day)]);
}

//newline
printf("\n");

//output2

for( year = 1995; year <= 2001;year++ )
{
    //printf("%d", trueword)
    printf("%hd�~%hd��%hd��%s�X�k����C\n", year, month, day, trueWord[isLegalDate(year, month, day)]);
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

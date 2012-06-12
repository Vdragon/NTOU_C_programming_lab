//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�GC Programming Practice 6-2 [Basic] Multi-Dimensional Arrays  �C
//�{���ԭz(Program Description)�GTry to find the sum of the scores of each subject in each class in each year.�C
//�{������(Program Version)�G1.00(2)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G14
//�̷s��s����(Latest Update Log)�G�ץ��T�w�ܼơBdebug�B�W�[Step4�C
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
int scanfTriggered = 0, sum = 0, year = 0, clas = 0, seatNo = 0, subject = 0;
float avg;
            //array
            const char * subname[3] = {"���", "�^��","�ƾ�"};
int score[2][3][5][3] =  // score[year][class][seatNo][subject = {Chinese, English, Math}]
	{ { {{98, 95, 92}, {89, 78, 82}, {88, 64, 64}, {61, 43, 44}, {48, 57, 58}},
	    {{86, 78, 44}, {65, 65, 63}, {56, 67, 77}, {47, 78, 43}, {54, 56, 58}},
	    {{46, 50, 76}, {65, 87, 66}, {64, 56, 66}, {92, 49, 86}, {45, 73, 83}} },

	  { {{77, 52, 91}, {40, 45, 69}, {89, 70, 82}, {75, 94, 60}, {78, 86, 63}},
	    {{85, 50, 91}, {92, 70, 82}, {72, 64, 93}, {86, 75, 52}, {43, 40, 83}},
	    {{89, 92, 67}, {55, 61, 91}, {40, 54, 48}, {75, 79, 47}, {47, 44, 97}} } };


//���D
//�����G1.00(3)
      printf("�{���W��(Program Name)�GC Programming Practice 6-2 [Basic] Multi-Dimensional Arrays �C\n");
      printf("�{���ԭz(Program Description)�G\nTry to find the sum of the scores of each subject in each class in each year.�C\n");
      printf("�{������(Program Version)�G1.00(2)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");
//Step1
printf("Step1\n");

    //calc
    for(subject = 0; subject < 3; subject++)
    {
        for(year = 0; year < 1; year++)
        {
            for(clas = 0; clas < 3; clas++)
            {
                for(seatNo = 0; seatNo < 5; seatNo++)
                {
                    //test
                        //printf("I'n \n");
                    sum = sum + score[year][clas][seatNo][subject];
                }
            }
        }
        //output
            printf("%d�~�žǥ�%s���Z�`�M�� %d\n",year, subname[subject], sum);
        //zero
            sum = 0;
    }
//Step2
    year = 0, clas = 0, seatNo = 0, subject = 0;
printf("Step2\n");

    //calc
    for(subject = 0; subject < 3; subject++)
    {
        for(year = 0; year < 2; year++)
        {
            for(clas = 0; clas < 3; clas++)
            {
                for(seatNo = 0; seatNo < 5; seatNo++)
                {
                    //test
                        //printf("I'n \n");
                    sum = sum + score[year][clas][seatNo][subject];
                }
            }
        //output
            printf("%d�~�žǥ�%s���Z�`�M�� %d\n",year + 1 , subname[subject], sum);
        //zero
            sum = 0;
        }
    }
//step3
    year = 0, clas = 0, seatNo = 0, subject = 0;
printf("Step3\n");

    //calc
    for(subject = 0; subject < 3; subject++)
    {
        for(year = 0; year < 2; year++)
        {
            for(clas = 0; clas < 3; clas++)
            {
                for(seatNo = 0; seatNo < 5; seatNo++)
                {
                    //test
                        //printf("I'n \n");
                    sum = sum + score[year][clas][seatNo][subject];
                }
            //output
                printf("%d�~%d�Z�ǥ�%s���Z�`�M�� %d\n",year + 1 ,clas + 1, subname[subject], sum);
            //zero
                sum = 0;
            }
        }
    }

//step4
year = 0, clas = 0, seatNo = 0, subject = 0;
	printf("Step4\n");

    //calc
    for(subject = 0; subject < 3; subject++)
    {
        for(year = 0; year < 2; year++)
        {
            for(clas = 0; clas < 3; clas++)
            {
                for(seatNo = 0; seatNo < 5; seatNo++)
                {
                    //test
                        //printf("I'n \n");
                    sum = sum + score[year][clas][seatNo][subject];
                    avg = sum / 5.0;
                }
            //output
                printf("%d�~%d�Z�ǥ�%s���Z������ %.2f\n",year + 1 ,clas + 1, subname[subject], avg);
            //zero
                sum = 0;
            }
        }
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

//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�C
//�{���ԭz(Program Description)�G�C
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
//Console IO library(Unknown)
//�����G1.00(0)
	#include <conio.h>
//--------------���ҳ]�w(Enviroment Settings)--------------
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
	//Pframe
		short int scanfTriggered = 0;
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(8)
//�n�骺�B��qmain��ƶ}�l
	int main(void)
	{
	//main()�ŧi�P�w�q(Declaration & Definition)
        //show the initial value
            double answer = 0;
        //get keyIn
            short int keyIn;
        //get amount
            double amount;
	//�СССССССССССССССССССС�
//���D
//�����G1.00(3)
/*
      printf("�{���W��(Program Name)�G�C\n");
      printf("�{���ԭz(Program Description)�G\n�C\n");
      printf("�{������(Program Version)�G1.00(0)\n");
      printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
      printf("�СССССССССССССССССССССССССССССССС�\n");
*/


//loop to check action(keyIn)+show value
    //while (always)
        while(true)
            {
                //show the value
                    printf("%.6lf\t", answer);
                //get keyIn
                    keyIn = getche();
                    //if keyIn == equal
                        if(keyIn == '=')
                            {
                                //new line
                                    printf("\n");
                                //then break
                                    break;
                            }

                    //else if keyIn == operator
                        else if(keyIn == '+')
                            {
                                //print space
                                    printf(" ");
                            }
                        else if(keyIn == '-')
                            {
                                //print space
                                    printf(" ");
                            }
                        else if(keyIn == '*')
                            {
                                //print space
                                    printf(" ");
                            }
                        else if(keyIn == '/')
                            {
                                //print space
                                    printf(" ");
                            }
                    //else other keyIn
                        else
                            {
                                //newline
                                    printf("\n");
                                //continue loop
                                    continue;
                            }
                //get amount
                    scanfTriggered = 1;
                    scanf("%lf", &amount);
                //calculate amount
                    if(keyIn == '+')
                        {
                            //assign new ans
                                answer = answer + amount;
                        }
                    if(keyIn == '-')
                        {
                            //assign new ans
                                answer = answer - amount;
                        }
                    if(keyIn == '*')
                        {
                            //assign new ans
                                answer = answer * amount;
                        }
                    if(keyIn == '/')
                        {
                            //check if div 0
                                if(amount == 0)
                                    {
                                        //continue
                                            continue;
                                    }
                            //assign new ans
                                answer = answer / amount;
                        }

    //while end
            }





//show ans
    //print ans
        printf("���G�G%.6lf\n", answer);













    //end
	//�СССССССССССССССССССССССССССССССССССССССС�
	//�ϵ{���Ȱ��B��
	//�����G1.00(16)
	//��k�@�J����t�Ϋ��O�]��Windows�t�Φ��ġB��#include <stdlib.h>�^
      //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
		//system("pause");
	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
         //��k�G
         //�ݥ���w�q
         //short int scanfTriggered = 0;
      printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
         if (scanfTriggered ==1)
         {
		  scanf("%*[^\n]");
            scanf("%*c");
		 }

		fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^


	//�СССССССССССССССССССС�
		//�Ǧ^�Ʀr���]��{���B�榨�\�^
		//�����G1.00(1)
		//return�᭱���i�[���ѡI
			return 0;
	}


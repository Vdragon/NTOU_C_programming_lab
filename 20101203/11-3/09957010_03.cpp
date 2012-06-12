//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G11-3�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G19
//�̷s��s����(Latest Update Log)�G�C
/*
��L(Other)�G�C
*/
//��s����(Change Log)�G�C
//--------------�`�N�ƶ�--------------
/*
��.�C�@�yStatement�᭱�����y;�z�C
��.�O�oReturn 0;�C
��.��BUG���ˬdscanf�C
��.compiler�i�঳�B�z��ơB�ܼƤ�����A���n�P�ɳB�z��̡C
��.�B���ƭn�`�N�O�_��return�ȡC
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//--------------���ҳ]�w(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
    int consecLength(int a[], int size);
//--------------�D�n�{���X(Main Code)--------------
//���D��X���
//�����G1.00(5)
void printTitle()
    {
          printf("�{���W��(Program Name)�G�C\n");
          printf("�{���ԭz(Program Description)�G\n�C\n");
          printf("�{������(Program Version)�G1.00(0)\n");
          printf("�Т������@��B�@�����������I��������\n�Ϣ����@����������@��Ӣ�Ӣ��Ӣ�\n");
          printf("�СССССССССССССССССССССССССССССССС�\n");
    }

//main��Ƭ[�c
//�����G1.00(9)
//�n�骺�B��qmain��ƶ}�l
int main(void)
	{
	//�ŧi�P�w�q(Declaration & Definition)
    //FROM PROBLEM
    /*
        const int aSize = 12;
        int num[aSize] ={3, 4, 5, 5, 7, 5, 6, 2, 3, 4, 5, 9};*/
    //FROM DEMO
        const int aSize = 100;
        int num[aSize] = {4, 1, 4, 8, 9, 7, 5, 4, 4, 5, 4, 5, 8, 4, 1, 4, 7, 8, 4, 5, 6, 8, 8, 1, 10, 1, 2, 7, 10, 10, 1, 2, 4, 7, 1, 2, 7, 8, 9, 10, 4, 10, 11, 12, 8, 9, 5, 1, 10, 1, 2, 2, 4, 10, 8, 8, 9, 10, 2, 7, 4, 5, 6, 7, 8, 9, 10, 2, 2, 8, 5, 2, 2, 2, 5, 8, 9, 10, 11, 12, 4, 2, 10, 8, 9, 8, 9, 10, 4, 5, 1, 2, 3, 5, 4, 5, 6, 7, 10, 4};
                                                        //TEST
                                                            //int num[3] ={3, 4, 5};
    //pointer for changing
        int * p;
    //pointer for the longest place
        int * pointLong = num;
    //maxLength
        int maxLength = 1;
    //counter
        int counterA;
    //mem for abdundant consecLength
        short int memconsecLength;
	//�СССССССССССССССССССС�
    //printTitle
        //printTitle();
    //first step
        //printf("%d\n", consecLength(num, 12));
                                                        //TEST
                                                            //printf("%d\n", consecLength(num, 3));
    //second step
        //for loop move pointer
            for(p = num; p < num + aSize; p++)
                {
                    //backup
                        memconsecLength = consecLength(p, aSize - (p - num));
                    if(maxLength < memconsecLength)
                        {
                             //change the max length
                                maxLength = memconsecLength;
                             //change the pointLong
                                pointLong = p;
                        }
                }
    //print output
        printf("{%d", *pointLong);
        for(counterA = 1; counterA < maxLength; counterA++)
            {
                printf(", %d", *(pointLong + counterA));
            }
        printf("}");
    //debug
        if(debug == 1)
            {
                printf("%d", maxLength);
            }
    //pause
		pauseProgram();
	//�СССССССССССССССССССС�
    //�Ǧ^�Ʀr���]��{���B�榨�\�^
    //�����G1.00(1)
    //return�᭱���i�[���ѡI
			return 0;
	}

//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
int consecLength(int a[], int size)
	{
		//�ŧi�P�w�q(Declaration & Definition)
        //counterConsec
            short int counterConsec;
        //num Current know
            int numCurrent = a[0];
		//�СССССССССССССССССССС�
		//for loop checking
            for(counterConsec = 2; counterConsec < size; counterConsec++)
                {
                    //if next number not conseq
                        if(numCurrent + 1 != a[counterConsec - 1])
                            {
                                //counterConsec should less one
                                    counterConsec--;
                                //break
                                    break;

                            }
                        else//next number conseq
                            {
                                //numCurrent++
                                    numCurrent++;
                            }

                }



		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return counterConsec;
	}
//�СССССССССССССССССССССССССССССССССССССССС�
//�ϵ{���Ȱ��B��
//�����G1.00(27)
void pauseProgram()
    {
        //make a line
            printf("\n�СССССССССССССССССССССССССССССССС�\n");
        /*�}��
            //��k�@�J����t�Ϋ��O�]��Windows�t�Φ��ġB��#include <stdlib.h>�^
                printf("��ܹB�浲�G�A�{���Ȱ��B��\n");
                system("pause");
        */
            //��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
                //���M��input buffer
                //�ݥ���w�qshort int scanfTriggered = 0;
                    //��k�@
                    /*�}��
                        if (scanfTriggered == 1)
                            {
                                  short int ch;
                                  while ((ch = getchar()) != EOF && ch != '\n');
                            }
                    */
                    //��k�G
                    //�}��
                        if (scanfTriggered == 1)
                            {
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
                    //
                //�}��
                //print message
                    printf("��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
                //get char from keyboard
                    fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^
                  //
    }

//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�C
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
//string.h
//�����G1.00(0)
    #include <string.h>
//Console IO library(Unknown)
//�����G1.00(0)
	#include <conio.h>
//--------------���ҳ]�w(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
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
    //input string
        char inputUser[13];
        char inputPass[13];
    //data given
        const int userTotal = 5;
        char *ID[userTotal] = {
           "SHE911",
           "J90909490",
           "maydayblog",
           "jayalfa",
           "fishleong106"
        };

        char *password[userTotal] = {
           "iloveyou",
           "onlyjolin",
           "mayday",
           "fantasy",
           "imfish"
        };
    //counterRead
        int counterA;
    //counterWrite
        int counterB;
        char ch;

	//�СССССССССССССССССССС�
    //printTitle
        //printTitle();
    while(1)
        {
    //prompt
        printf("�п�J�b���G");
        scanfTriggered = 1;
        scanf("%s", inputUser);
    //think ID
        //for loop read
            for(counterA = 0; counterA < userTotal; counterA++)
                {
                    //if not same
                        if(strcmp(ID[counterA], inputUser) == 0)
                              {
                                break;
                              }
                }
            if(counterA >= userTotal)
                {
                    printf("�b�����~�C�S���o�ӤH�աI\n");
                    continue;
                }
            else
            {
    //prompt pass
        printf("�п�J�K�X�G");
        scanfTriggered = 1;
    //for loop write
        for(counterB = 0, ch = getch(); ; counterB++, ch = getch())
            {
                //if
                    if(ch == '\r')
                          {
                            inputPass[counterB] = '\0';
                            break;
                          }
                //write
                    inputPass[counterB] = ch;
                //print
                    printf("*");
            }
    //think PASS


        //if not same
            if(strcmp(password[counterA], inputPass) != 0)
                  {
                        //wrong
                            printf("\n�K�X���~�C\n");
                        //
                            continue;

                  }
            }


        //break
            break;
        }
    //ok
        printf("\n�K�X���T�C�n�J���\�I\n�w��i�J�]�k�@�ɡI \n");


	//pause
		pauseProgram();
	//�СССССССССССССССССССС�
    //�Ǧ^�Ʀr���]��{���B�榨�\�^
    //�����G1.00(1)
    //return�᭱���i�[���ѡI
			return 0;
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

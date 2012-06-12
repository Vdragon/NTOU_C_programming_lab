//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G11-1�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G19
//�̷s��s����(Latest Update Log)�Gbuild ok�C
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
    void strangeFunc(int a[], int size);
    void swapInt(int * a,int * b);
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
int main()
	{
	//�ŧi�P�w�q(Declaration & Definition)


	//�СССССССССССССССССССС�
    //printTitle
        //printTitle();
    //code from problem
        //data given
            int a[13] = {65, 0, -5, -22, 9, 231, 43, -7, 11, -65, 0, -18, 65};
            int b[14] = {65, 0, -5, -22, 9, 231, 43, -7, 11, 65, 0, -18, 65, 88};
            int c[14] = {65, 0, 5, 22, 9, 231, 43, 7, 11, 65, 0, 18, 65, 88};

        //print the original list in a[];
            printf("��� a[] �� {65, 0, -5, -22, 9, 231, 43, -7, 11, -65, 0, -18, 65}\n");
        //print the original list in b[];
            printf("��� b[] �� {65, 0, -5, -22, 9, 231, 43, -7, 11, 65, 0, -18, 65, 88}\n");
        //print the original list in c[];
            printf("��� c[] �� {65, 0, 5, 22, 9, 231, 43, 7, 11, 65, 0, 18, 65, 88}\n");
        //call func.
            strangeFunc(a, 13);
            strangeFunc(b, 14);
            strangeFunc(c, 14);

        //print blank line
            printf("\n");
        //print the modified list in a[];
            printf("��� a[] �� {%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12]);
        //print the modified list in b[];
            printf("��� b[] �� {%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], b[8], b[9], b[10], b[11], b[12], b[13]);
        //print the modified list in c[];
            printf("��� c[] �� {%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9], c[10], c[11], c[12], c[13]);
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
void strangeFunc(int a[], int size)
	{
		//�ŧi�P�w�q(Declaration & Definition)
        //let p, q be the first, last position of array
            int * p = &a[0], * q = &a[size - 1];

		//�СССССССССССССССССССС�
		//while p's position is before q's
            while(p < q)
                {
                    if(*p < 0)
                        {
                            //if *p && *q < 0
                                if(*q < 0)
                                    {
                                        //swap
                                            swapInt(p, q);
                                        //move both
                                            p++;
                                            q--;
                                        //continue
                                            continue;
                                    }
                                else//if only *p < 0
                                    {
                                        //move q
                                            q--;
                                        //continue
                                            continue;
                                    }
                        }
                    else//if !(*p < 0)
                        {
                            //if only *q < 0
                                if(*q < 0)
                                    {
                                        //move p
                                            p++;
                                        //continue
                                            continue;
                                    }
                                else//if all not < 0
                                    {
                                        //move both
                                            p++;
                                            q--;
                                        //continue
                                            continue;
                                    }
                        }
                }





		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;

	}
//swap func.(��ƱM�Ϊ���)
//�����G1.00(0)
/*
returnType functionName(auguments)
*/
void swapInt(int * a,int * b)
	{
		//�ŧi�P�w�q(Declaration & Definition)
        //mem
            int mem;

		//�СССССССССССССССССССС�
        //swap
            //backup a
                mem = *a;
            //assign a with *b
                *a = *b;
            //assign *b with backuped a
                *b = mem;
		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return;
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

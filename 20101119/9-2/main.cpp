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

//C Standard General Utilities Library
//�����G1.00(2)
	/*
	for srand()
	for SYSTEM("pause") if working
	�DWindows�t�νT�w����ϥΡ]�]���L�Өt�Ϋ��O�^
	*/
	#include <stdlib.h>
//--------------���ҳ]�w(Enviroment Settings)--------------
    //system(0 for dos 1 for LINUX
        #define SYSTEM 0
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
	//Pframe
		short int scanfTriggered = 0;
    //wait a keyIn(Global)
        char keyIn;
    //mail Menu func
        void mailMenu();
    //Talk Menu func
        void talkMenu();
    //xyz Menu func
        void xyzMenu();
    //game Menu func
        void gameMenu();
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(8)
//�n�骺�B��qmain��ƶ}�l
int main(void)//mainMenu
	{
	//main()�ŧi�P�w�q(Declaration & Definition)


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

//while loop(always)
while(true)
	{
	    //clean screen
            //if DOS
                if(SYSTEM == 0)
                    {
                        //run command cls
                            system("cls");
                    }
            //if LINUX
                else if(SYSTEM == 1)
                    {
                        //run command clear
                            system("clear");
                    }
        //print mainMenu
            printf("\t(A)nnounce  �i ��ؤ��G�� �i\n");
            printf("\t(B)oards    �[ �G�i�Q�װ� �[\n");
            printf("\t(C)lass     �p ���հQ�׶� �p\n");
            printf("\t(F)avorite  �b �ڪ��̷R�s �b\n");
            printf("\t(M)ail      �g �H����ò� �g\n");
            printf("\t(T)alk      �s �𶢲�Ѧa �s\n");
            printf("\t(U)ser      �k �ӤH�u��{ �k\n");
            printf("\t(X)yz       �c �S��۫ݩ� �c\n");
            printf("\t(G)oodbye   �_ �U���A�|�a �_\n");
        //wait a keyIn(Global)
            keyIn = getch();
        //switch options
            switch(keyIn)
                {   //every case with state
                        case 'A': case 'a':break;
                        case 'B': case 'b':break;
                        case 'C': case 'c':break;
                        case 'F': case 'f':break;
                        case 'M': case 'm':mailMenu();break;
                        case 'T': case 't':talkMenu();break;
                        case 'U': case 'u':break;
                        case 'X': case 'x':xyzMenu();break;
                        case 'G': case 'g':break;
                }
	}




	//�СССССССССССССССССССССССССССССССССССССССС�
	//�ϵ{���Ȱ��B��
	//�����G1.00(16)
	//��k�@�J����t�Ϋ��O�]��Windows�t�Φ��ġB��#include <stdlib.h>�^
      //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
		//system("pause");
	//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
        printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n�Ы�Enter�~��");
         //��k�G
         //�ݥ���w�q
         //short int scanfTriggered = 0;

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

//mail Menu func
    //��L��Ƭ[�c
    //�����G1.00(0)
    /*
    returnType functionName(auguments)
    */
    void mailMenu()
        {
            //�ŧi�P�w�q(Declaration & Definition)


            //�СССССССССССССССССССС�
            //while loop(always)
            while(true)
                {
                    //clean screen
                        //if DOS
                            if(SYSTEM == 0)
                                {
                                    //run command cls
                                        system("cls");
                                }
                        //if LINUX
                            else if(SYSTEM == 1)
                                {
                                    //run command clear
                                        system("clear");
                                }
                        //print menu(unknown warning '\305')
                            printf("\t(R)ead       �u �\Ū�H�� �t\n");
                            printf("\t(M)ail       �u �����H�H �t\n");
                            printf("\t(L)ist       �u �s�ձH�H �t\n");
                            printf("\t(I)nternet   �u �H�̩f�� �t\n");
                            printf("\t(Z)ip        �u ���]��� �t\n");
                            printf("\t(Y)es Sir!   �u ��ѯ��� �t\n");
                        //wait a keyIn(Global)
                            keyIn = getch();
                            //if keyIn == '\xe0' or '\0'
                                if(keyIn == '\xe0' || keyIn == '\0')
                                    {
                                        //get next char
                                            keyIn = getch();
                                        //if next char == 'K'
                                            if(keyIn == 'K')
                                                {
                                                    return;
                                                }
                                    }
                        //switch options
                            switch(keyIn)
                                {   //every case with state
                                        case 'R': case 'r':break;
                                        case 'M': case 'm':break;
                                        case 'L': case 'l':break;
                                        case 'I': case 'i':break;
                                        case 'Z': case 'z':break;
                                        case 'Y': case 'y':break;
                                        //backsp case
                                            case '\x08': return;
                                }
                }

        }

//Talk Menu func
    //��L��Ƭ[�c
    //�����G1.00(0)
    /*
    returnType functionName(auguments)
    */
    void talkMenu()
        {
            //�ŧi�P�w�q(Declaration & Definition)


            //�СССССССССССССССССССС�
            //while loop(always)
            while(true)
                {
                    //clean screen
                        //if DOS
                            if(SYSTEM == 0)
                                {
                                    //run command cls
                                        system("cls");
                                }
                        //if LINUX
                            else if(SYSTEM == 1)
                                {
                                    //run command clear
                                        system("clear");
                                }
                        //print menu(unknown warning '\305')
                            printf("\t(U)sers      �� �C�ȦW�� ��\n");
                            printf("\t(L)istMenu   �� �]�w�W�� ��\n");
                            printf("\t(P)ager      �� �����I�s ��\n");
                            printf("\t(I)nvis      �� �����K�k ��\n");
                            printf("\t(Q)uery      �� �d�ߺ��� ��\n");
                            printf("\t(T)alk       �� ���ܺ��� ��\n");
                            printf("\t(C)hatRoom   �� ���f��� ��\n");
                            printf("\t(D)isplay    �� �s�����y ��\n");
                            printf("\t(W)rite      �� �^�U���y ��\n");
                        //wait a keyIn(Global)
                            keyIn = getch();
                            //if keyIn == '\xe0' or '\0'
                                if(keyIn == '\xe0' || keyIn == '\0')
                                    {
                                        //get next char
                                            keyIn = getch();
                                        //if next char == 'K'
                                            if(keyIn == 'K')
                                                {
                                                    return;
                                                }
                                    }
                        //switch options
                            switch(keyIn)
                                {   //every case with state
                                        case 'U': case 'u':break;
                                        case 'L': case 'l':break;
                                        case 'P': case 'p':break;
                                        case 'I': case 'i':break;
                                        case 'Q': case 'q':break;
                                        case 'T': case 't':break;
                                        case 'C': case 'c':break;
                                        case 'D': case 'd':break;
                                        case 'W': case 'w':break;
                                        //backsp case
                                            case '\x08': return;
                                }
                }

        }

//xyz Menu func
    //��L��Ƭ[�c
    //�����G1.00(0)
    /*
    returnType functionName(auguments)
    */
    void xyzMenu()
        {
            //�ŧi�P�w�q(Declaration & Definition)


            //�СССССССССССССССССССС�
            //while loop(always)
            while(true)
                {
                //clean screen
                    //if DOS
                        if(SYSTEM == 0)
                            {
                                //run command cls
                                    system("cls");
                            }
                    //if LINUX
                        else if(SYSTEM == 1)
                            {
                                //run command clear
                                    system("clear");
                            }
                            //print menu(unknown warning '\305')
                                printf("\t(N)et        �i �����A�� �j\n");
                                printf("\t(K)TV        �i �u���I�q �j\n");
                                printf("\t(J)oin       �i �ݪO�s�p �j\n");
                                printf("\t(G)ame       �i �C���H�� �j\n");
                                printf("\t(M)arket     �i ���ĥ��� �j\n");
                                printf("\t(O)ther      �i ���C���K �j\n");
                            //wait a keyIn(Global)
                                keyIn = getch();
                            //if keyIn == '\xe0' or '\0'
                                if(keyIn == '\xe0' || keyIn == '\0')
                                    {
                                        //get next char
                                            keyIn = getch();
                                        //if next char == 'K'
                                            if(keyIn == 'K')
                                                {
                                                    return;
                                                }
                                    }
                            //switch options
                                switch(keyIn)
                                    {   //every case with state
                                            case 'N': case 'n':break;
                                            case 'K': case 'k':break;
                                            case 'J': case 'j':break;
                                            case 'G': case 'g':gameMenu();break;
                                            case 'M': case 'm':break;
                                            case 'O': case 'o':break;
                                            //backsp case
                                                case '\x08': return;
                                    }
            }

        }


//game Menu func
    //��L��Ƭ[�c
    //�����G1.00(0)
    /*
    returnType functionName(auguments)
    */
    void gameMenu()
        {
            //�ŧi�P�w�q(Declaration & Definition)


            //�СССССССССССССССССССС�
            //while loop(always)
            while(true)
                {
                    //clean screen
                        //if DOS
                            if(SYSTEM == 0)
                                {
                                    //run command cls
                                        system("cls");
                                }
                        //if LINUX
                            else if(SYSTEM == 1)
                                {
                                    //run command clear
                                        system("clear");
                                }
                                //print menu(unknown warning '\305')
                                    printf("\t(1)GuessNum  �i  �q�Ʀr  �j\n");
                                    printf("\t(2)Game      �i �C���ֶ� �j\n");
                                    printf("\t(3)Game      �i �Ϥ�S�� �j\n");
                                //wait a keyIn(Global)
                                    keyIn = getch();
                            //if keyIn == '\xe0' or '\0'
                                if(keyIn == '\xe0' || keyIn == '\0')
                                    {
                                        //get next char
                                            keyIn = getch();
                                        //if next char == 'K'
                                            if(keyIn == 'K')
                                                {
                                                    return;
                                                }
                                    }
                                //switch options
                                    switch(keyIn)
                                        {   //every case with state
                                                case '1':break;
                                                case '2':break;
                                                case '3':break;
                                                //backsp case
                                                    case '\x08': return;break;
                                        }
                    }

        }



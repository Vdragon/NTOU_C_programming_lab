//�{���ج[(Program Frame)
//-------------------------------------------------------------------
//�{���W��(Program Name)�G�C
//�{���ԭz(Program Description)�G�C
//�{������(Program Version)�G1.00(0)
//�{���ج[����(Program Frame Version)�GA
//�{���ج[�׭q��(Program Frame Revision Number)�G21
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
��.�bcondition statement ���n�ϥΦh��AND�BOR�V�X���P�_�y�ɩy�NAND���j���UOR�y�άA���A�_�ӡC
��.������]�G��int main(){}�~��ΰ����u��C
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
//string.h
//�����G1.00(0)
    #include <string.h>
//C Standard General Utilities Library
//�����G1.00(2)
	/*
	for srand()
	for SYSTEM("pause") if working
	�DWindows�t�νT�w����ϥΡ]�]���L�Өt�Ϋ��O�^
	*/
	#include <stdlib.h>
//--------------���ҳ]�w(Enviroment Settings)--------------
//define debug functionality
	#define debug 0
//OS Catergory
	#define SYSTEM 0//Windows console = 0, Linux console = 1
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
//structure for data
    struct userData
        {
            char ID[13];//max 12ASC
            char nickname[21];//MAX 20 ASC
            int loginTimes;
            int articles;
            int money;
            char lastLogin[9];//yyyymmdd+1
            char gender;//1char�ӭ�(B) / ���k(G) / �ʪ�(A) / �Ӫ�(P) / �q��(R) / ����(U)
            bool verified;
            bool hidden;
        };
//global variable
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	short int scanfTriggered = 0;
//assign int for storing data size
    unsigned short int dataSizeI;
//function prototype
//function prototype for//�ϵ{���Ȱ��B��
	void pauseProgram();
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(10)
//�n�骺�B��qmain��ƶ}�l
//void�|��debugger�L�k�ҰʡI
int main(void)
	{restart:
	//�ŧi�P�w�q(Declaration & Definition)


	//�СССССССССССССССССССС�
    //open binary save
        FILE *filePtr = fopen("G:\\DEBUG\\20101231\\01\\bin\\Debug\\userData.binary", "rb");
    ////open binary save
    //check if read success!
        if(filePtr == NULL)
            {
                printf("��ƮwŪ�����ѡI\n");
            }
    ////check if read success!
        //for-loop for searching &break
            //find user size
                fseek(filePtr, 0, SEEK_END);
                dataSizeI = (ftell(filePtr) / sizeof(userData));
                rewind(filePtr);
            //debug
                printf("Debug:%d\n", dataSizeI);
            ////debug

    //declare a userData
        userData users[100];
    //declare
        unsigned short fileReadC;
    //read block
        for(fileReadC = 0; filePtr != NULL && fileReadC < 100; fileReadC++)
            {
                fread(&users[fileReadC], sizeof(userData), 1, filePtr);
            }

    /*
        printf("Read finished!\n");
    *///
    //close file
        fclose(filePtr);
    ////close file
    //output
    {
        unsigned short int printC;
        for(printC = 0; printC < dataSizeI; printC++)
            {
                printf("[user]\nID=%s\nnickname=%s\nloginTimes=%d\narticles=%d\nmoney=%d\nlastLogin=%s\n", users[printC].ID, users[printC].nickname, users[printC].loginTimes, users[printC].articles, users[printC].money, users[printC].lastLogin);
                printf("gender=%c\n", users[printC].gender);
                /*switch
                switch(users[printC].gender)
                    {
                        case B : printf("gender="):break;
                    }
                *///switch

                printf("verified=%s\nhidden=%s\n\n", users[printC].verified ? "�O" : "�_", users[printC].hidden ? "�O":"�_");
            ////output
            }


    }

    {//Q2

        //assign string for inputID
            char inputID[13];
        //assign counter for assigning
            unsigned short int searchC;

        //prompt
        //�����G1.00(0)
            printf("�i �d�ߺ��� �j\n�п�J�N���G");
            scanfTriggered = 1;
            scanf("%s", &inputID);


            //for loop
                for(searchC = 0; searchC < dataSizeI && searchC < 100; searchC++)
                    {
                        //if cmp return 0 shows found
                            if(!strcmp(users[searchC].ID, inputID))
                                {
                                    break;
                                }
                    }
            //if searchC is 24 means not found
                if(searchC == dataSizeI)
                      {
                            printf("�d�L���H�I\n");
                            exit(1);
                      }

        ////prompt
        {//print data
            int year, month, day;
            char * genderS[6] = {"�ӭ�", "���k", "�ʪ�", "�Ӫ�", "�q��", "����"};

            printf("[�b��] %-12s [�ʺ�] %-20s [�W��] %8d [�峹] %8d\n", users[searchC].ID, users[searchC].nickname, users[searchC].loginTimes, users[searchC].articles);
            sscanf(users[searchC].lastLogin, "%4d%2d%2d", &year, &month, &day);
            printf("[�{��] %-12s [�W��] %d �~ %2d �� %2d �� ", users[searchC].verified == true ? "�w�g�q�L�{��":"�|���q�L�{��", year, month, day);
            printf(" [�ʧO] �ڬO");
            switch(users[searchC].gender)
                {
                    case 'B': printf("%-4s", genderS[0]) ; break;
                    case 'G': printf("%-4s", genderS[1]) ; break;
                    case 'A': printf("%-4s", genderS[2]) ; break;
                    case 'P': printf("%-4s", genderS[3]) ; break;
                    case 'R': printf("%-4s", genderS[4]) ; break;
                    default: printf("%-4s", genderS[5]) ; break;
                }
            printf(" [�]��] ");
            if(users[searchC].money < 0)
                  {
                        printf("�t�Ųֲ�");
                  }
            else if(users[searchC].money < 1000)
                  {
                        printf("�a�ҲM�H");
                  }
            else if(users[searchC].money < 10000)
                  {
                        printf("�a�Ҵ��q");
                  }
            else if(users[searchC].money < 20000)
                  {
                        printf("�a�Ҥp�d");
                  }
            else if(users[searchC].money < 30000)
                  {
                        printf("�a�ҴI��");
                  }
            else
                  {
                        printf("�a�]�U�e");
                  }
        }

    }
    {//Q3
    //open file
        FILE *filePtr = fopen("G:\\DEBUG\\20101231\\01\\bin\\Debug\\userData.binary", "wb");
        unsigned short int editC;
        for(editC = dataSizeI; true; editC++)
            {
                printf("�i�s�b�����U�����j\n");
                //prompt
                //�����G1.00(0)
                    printf("ID=");
                    scanfTriggered = 1;
                    scanf("%s", &users[editC].ID);
                //prompt
                //�����G1.00(0)
                    printf("nickname=");
                    scanfTriggered = 1;
                    scanf("%s", &users[editC].nickname);
                /*prompt
                //�����G1.00(0)
                    printf("loginTimes=");
                    scanfTriggered = 1;
                    scanf("%d", &users[editC].loginTimes);
                *///prompt
                //default
                    users[editC].loginTimes = 0;
                /*prompt
                //�����G1.00(0)
                    printf("loginTimes=");
                    scanfTriggered = 1;
                    scanf("%d", &users[editC].loginTimes);
                *///prompt
                users[editC].articles = 0;
                /*prompt
                //�����G1.00(0)
                    printf("loginTimes=");
                    scanfTriggered = 1;
                    scanf("%d", &users[editC].loginTimes);
                *///prompt
                users[editC].money = 0;
                /*prompt
                //�����G1.00(0)
                    printf("loginTimes=");
                    scanfTriggered = 1;
                    scanf("%d", &users[editC].loginTimes);
                *///prompt
                //prompt
                //�����G1.00(0)
                    printf("�������H�����D�A�п�J������(yyyymmdd)�G");
                    scanfTriggered = 1;
                    scanf("%s", &users[editC].lastLogin);
                //prompt
                //�����G1.00(0)
                    printf("�ӭ�(B) / ���k(G) / �ʪ�(A) / �Ӫ�(P) / �q��(R) / ����(U)�H");
                    scanfTriggered = 1;
                    //scanf("*%c", NULL);
                    scanf("\n%c", &users[editC].gender);

                /*prompt
                //�����G1.00(0)
                    printf("");
                    scanfTriggered = 1;
                    scanf("", &);
                *///prompt
                users[editC].verified = false;
                users[editC].hidden = false;
                //fwrite
                    fwrite(users, sizeof(userData), editC +1, filePtr);

                //prompt
                //�����G1.00(0)
                    printf("���U�����A�Э��s�W���I\n");
                    scanfTriggered = 1;
                    getchar();
                ////prompt
                if(editC == 25)
                    {
                        system("cls");
                        fclose(filePtr);
                        break;
                    }
            }
    }

    goto restart;

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


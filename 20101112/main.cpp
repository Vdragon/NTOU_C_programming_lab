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
*
��.��BUG���ˬdscanf�C
��.compiler�i�঳�B�z��ơB�ܼƤ�����A���n�P�ɳB�z��̡C
��.�B���ƭn�`�N�O�_��return�ȡC
*/
//--------------�{���X�}�l(Code Started)--------------
//--------------�e�m�B�z���ﶵ(Preprocessor Code)--------------
//standard input/output library
//�����G1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//Date and time functions Library
//�����G1.00(0)
	/*
	for srand()
	*/
	#include <time.h>

//C Standard General Utilities Library
//�����G1.00(2)
	/*
	for srand()
	for SYSTEM("pause") if working
	�DWindows�t�νT�w����ϥΡ]�]���L�Өt�Ϋ��O�^
	*/
	#include <stdlib.h>

//--------------���ҳ]�w(Enviroment Settings)--------------
//define debug var
	#define debug 0
//���a�p�Ѽ�
    #define HEIGHT 9 //bordery MAX = 9
    #define WIDTH 19 //borderx MAX = 19
    #define MINETOTAL 80 //mine -1
    ////switch
//system
	#define SYSTEM 1//Windows console = 0, Linux console = 1
//--------------����ŧi�P�w�q(Global Declaration & Definition)--------------
//global variable
//for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	short int scanfTriggered = 0;

/*���a�p�Ѽ�(�ܼƤ�)(�]���}�C�d��L�k�ܼƤư���)
    short int HEIGHT = 4; //bordery
    short int WIDTH = 4; //borderx
    short int MINETOTAL = 3; //mine -1
    *///switch

//���a�p�ܼ�
    short int mine[HEIGHT + 2][WIDTH + 2];
    short int state[HEIGHT + 2][WIDTH + 2] = {{0}, {0}};
    short int mineCurrent = MINETOTAL;
    short int flagCurrent = 0;
    short int showInfo = 1;

//function prototype
	void pauseProgram();
    void initialGame();
    void printGameField();
    void washField();
    void uncoverZero();
//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(9)
//�n�骺�B��qmain��ƶ}�l
int main(void)
	{
	//�ŧi�P�w�q(Declaration & Definition)
        //var for input POSITION/ACTION
            short int inputNum, inputAction;
            char inputRow;

	//�СССССССССССССССССССС�
    //printTitle
        //printTitle();
																															//test ACSII code
																															//printf("%d", 'C');
    //init func.
        initialGame();

    //while always TRUE  input block
    while(1)
        {
            //printGameField
                printGameField();
            //prompt
                printf("�аݱz�n����@��i��ʧ@�]�Ҧp�GA1�^�H\t");
                //position
                    scanfTriggered = 1;
                    scanf("%c%hd", &inputRow, &inputNum);
                    //inputRow should be in ASCII order('A' = 65, and so on)
																															//debug
																															//printf("********Debug message: %hd\t%hd*********\n", inputRow, inputNum);
                //action
                    printf("�аݱz���ʧ@�O�H\n");
                    printf("��.�]���W�������^�X�l\t��.��U�h�H\t");
                    scanfTriggered = 1;
                    scanf("%hd", &inputAction);
				//TRY clean keyboard buff OK!!
                    scanf("%*[^\n]");
                    scanf("%*c");
                    //reset token
                    scanfTriggered = 0;
            //change state
                if(inputAction == 2)//uncover
                    {
                          if(state[inputRow - 64][inputNum] == 1)//Flagged
                              {
                                printf("�z�����w�g��W�X�l���a��I\n");
                                  //pause(temp)//conio(getch())���ۮe��Linux�A�ҥH�u��γo��...
                                    //�ϵ{���Ȱ��B��
                                    //�����G1.00(15)
                                        //��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
                                         //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
                                            //system("pause");
                                        //��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
                                         printf("�Ы�Enter�~��");
                                            //���M��imput buffer
                                            //��k�@
                                            /*
                                              short int ch;
                                              while ((ch = getchar()) != EOF && ch != '\n');
                                            */
                                            //��k�G
                                            //�ݥ���w�q
                                            //short int scanfTriggered = 0;
                                            fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^
                            }
                          else if(mine[inputRow - 64][inputNum] == -1)//GAMEOVER
                            {
                                //clean console
                                    if(SYSTEM == 1)
                                      {
                                          system("clear");
                                      }
                                    else
                                      {
                                          system("cls");
                                      }

                                washField();

                                printGameField();
                                printf("\n");
                                printf("�z�Q�����F��ҢҢҢҢ�");

                                break;

                              }
                          else//normal
                              {
                                state[inputRow - 64][inputNum] = 2;
                              }
                    }
             else if(inputAction == 1)//uncover  flag
                {
                    if(state[inputRow - 64][inputNum] == 2)//uncovered
                        {
                              printf("�z������L���a���W�X�l�I\n");
                        }
                    else if(state[inputRow - 64][inputNum] == 1)//if flagged
                        {
                            state[inputRow - 64][inputNum] = 0;//unflag
                            flagCurrent--;
                            if(mine[inputRow - 64][inputNum] == -1)
                                {
                                    mineCurrent++;
                                }
                        }
                    else //if not flagged
                        {
                            state[inputRow - 64][inputNum] = 1;//flag
                            flagCurrent++;
                            if(mine[inputRow - 64][inputNum] == -1)
                                {
                                    mineCurrent--;
                                }
                        }

                }
			if(mineCurrent == 0)
				{
					//clean console
					  if(SYSTEM == 1)
                          {
                              system("clear");
                          }
					  else
                          {
                              system("cls");
                          }
					washField();
					printGameField();
					printf("\n�i�c�֡աA�A����٬��۩O�ݢ��C�H");
					break;
				}
					  //clean console
					  if(SYSTEM == 1)
                          {
                              system("clear");
                          }
					  else
                          {
                              system("cls");
                          }
        }
        //pause
            pauseProgram();
	//�СССССССССССССССССССС�
    //�Ǧ^�Ʀr���]��{���B�榨�\�^
    //�����G1.00(1)
    //return�᭱���i�[���ѡI
			return 0;
	}

/*(�]���}�C�d��L�k�ܼƤư���)
void printTitle()
    {
        printf("\t��\t�a\t�p\t���� 1.00(1)\n");
        printf("�СйC���e�п�J�С�\n");
        //ask HEIGHT
        printf("�C�ơG");
        scanfTriggered = 1;
        scanf("%d", &HEIGHT);
        printf("��ơG");
        scanfTriggered = 1;
        scanf("%d", &WIDTH);
        printf("�a�p�ơG");
        scanfTriggered = 1;
        scanf("%d", &MINETOTAL);
        system("cls");
    }
*/
void initialGame()
{

    srand((unsigned)time(NULL));//init rand()
    short int i, j, randX, randY, k, used =0, checkUsed = 0;
    short int usedX[MINETOTAL] = {0}, usedY[MINETOTAL] = {0};
    //reset loop
    for(j = 0;j < HEIGHT + 2 ;j++ )//�檺���W
        {
        for(i = 0;i < WIDTH + 2;i++ )//�C�����W
            {
                mine[j][i] = 0;//reset game field

                //test
                //printf("0   ");
            }
        //printf("\n");
        }


					  //pause(temp)
						//�ϵ{���Ȱ��B��
						//�����G1.00(15)
							//��k�@�J����t�Ϋ��O�]�����t�Φ��ġB��#include <stdlib.h>�^
							 //printf("\n�СССССССССССССССССССССССССССССССС�\n��ܹB�浲�G�A�{���Ȱ��B��\n");
								//system("pause");
							//��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
							 //printf("�Ы�Enter�~��");
								//���M��imput buffer
							    //��k�@
							    /*
								  short int ch;
								  while ((ch = getchar()) != EOF && ch != '\n');
							    */
							    //��k�G
							    //�ݥ���w�q
							    //short int scanfTriggered = 0;
								//fgetc(stdin); //�Ѽ�stdin����L(stream�ӷ�)��J�]��scanf()�N�|�L�ġA���M��inputbuffer�^



    //Q1

    /*
    mine[1][WIDTH] = -1;
    mine[1][WIDTH - 1] = mine[2][WIDTH - 1] = mine[2][WIDTH] = 1;
    */
    //Q2
        for(k = 0; k < MINETOTAL; k++)
            {
                //make random x y
                randX = rand() % WIDTH + 1;
                randY = rand() % HEIGHT + 1;
                //check used
                for(checkUsed = 0; checkUsed < used; checkUsed++)
                    {
                        if(usedX[checkUsed] == randX && usedY[checkUsed] == randY)
                              {
                                    //rerand
                                    randX = rand() % WIDTH + 1;
                                    randY = rand() % HEIGHT + 1;
                                    //checkUsed �k�s
                                    checkUsed = -1;//�ݸ�for�j�骺increment��P
                              }
                    }
                //assign used
                usedX[used] = randX;
                usedY[used] = randY;
                used++;
                //test
                //printf("%hd\n", used);
                //set mine
                mine[randY][randX] = -1;
                //set mine around
                for(j = 0; j < 3; j++)
                    {
                        for(i = 0; i < 3;i++ )
                            {
                                if(mine[randY - 1 + j][randX - 1 + i] != -1)
                                      {
                                            mine[randY - 1 + j][randX - 1 + i]++;
                                      }
                                else
                                      {
                                        //don't do anything!
                                      }
                            }
                    }
            }

}

void printGameField()
    {
        short int i, j;
        char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        //indication
            if(showInfo == 1)
            {
            printf("�a�p�`�� = %hd\t�X�l�`�� = %d\n", MINETOTAL, flagCurrent);
            }

        //new row 1
        printf(" ");
        for(i = 1; i <= WIDTH; i++)
            {
                printf("  %2hd", i);
            }
        //new line
        printf("\n");
        //print row 1 2
        /*
        //row1
        for(i = 0; i < WIDTH + 2; i++)
            {
                printf("%hd   ", mine[0][i]);
            }
        //new line
        printf("\n");
        */
        //row2+new
        printf(" �z");
        for(i = 0 ;i < WIDTH - 1 ; i++)
            {
                printf("�w�s");
            }
        printf("�w�{");

        //new line
        printf("\n");

        //loop print row 3, 4~8
        for(j = 1;j <= HEIGHT - 1 ; j++)
            {
                //row3
                /*
                //first num
                printf("%hd", mine[j][0]);
                */
                //new row3
                //new first num
                printf("%c", alphabet[j - 1]);

                //other num+char
                for(i = 1; i < WIDTH + 1; i++)
                    {
                    	//add state
                    	if(state[j][i] == 0)
                    	{
                    		printf("�x��");
                    	}
                    	else if(state[j][i] == 1)
                    	{
                    		printf("�x��");
                    	}
                    	else if(state[j][i] == 2)
                    	{
						    if(mine[j][i] == -1)
							 {
							   printf("�x��");
							 }
						    else if(mine[j][i] == 0)
							   {
								  printf("�x  ");
							   }
						    else
							   printf("�x%2hd", mine[j][i]);
                    	}

                    }
                printf("�x");
                //newline
                printf("\n");
                //row4
                printf(" �u");
                for(i = 0 ;i < WIDTH - 1 ; i++)
                    {
                        printf("�w�q");
                    }
                printf("�w�t");
                //newline
                printf("\n");
            }
        //print row 9+new
            //newfirst num
                printf("%c", alphabet[j - 1]);

            //other num+char
            for(i = 1; i < WIDTH + 1; i++)
                    {
                    //add state
                        if(state[j][i] == 0)
                            {
                                printf("�x��");
                            }
                        else if(state[j][i] == 1)
                            {
                                printf("�x��");
                            }
                        else
                            {
                                 if(mine[j][i] == -1)
                                       {
                                        printf("�x��");
                                       }
                                 else if(mine[j][i] == 0)
                                        {
                                            printf("�x  ");
                                        }
                                 else if (state[j][i] == 2)
                                    printf("�x%2hd", mine[HEIGHT][i]);
                            }
                    }
                printf("�x");
                //newline
                    printf("\n");
        //print last char row, new
            printf(" �|");
            for(i = 0 ;i < WIDTH - 1 ; i++)
                {
                    printf("�w�r");
                }
            printf("�w�}");
            //newline
                printf("\n");


    }
void washField()
    {
        short int i, j;
        for(i = 0; i < HEIGHT + 1; i++)
            {
                for(j = 0; j < WIDTH + 1; j++)
                    {
                        state[i][j] = 2;
                    }
            }
    }
void uncoverZero(void)
    {

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

    }

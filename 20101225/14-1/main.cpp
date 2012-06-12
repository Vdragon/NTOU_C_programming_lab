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
//Console IO library(Unknown)
//�����G1.00(0)
	#include <conio.h>

//string.h
//�����G1.00(0)
    #include <string.h>
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
//structure
    struct playerData
        {
            char name[31];
            unsigned short int experience;
            int life;
            unsigned short int mana;
            unsigned short int speed;
            unsigned short int attack;
        };
    struct monsterData
        {
                char type[31];
                short int life;
                unsigned short int speed;
                unsigned short int attack;
                unsigned short int provideExp;
        };
//global variable
//global variable for ��k�G�G�B�ο�Jfunction�]��#include <stdio.h>�^
	short int scanfTriggered = 0;
	//declare player
        playerData player;
    //constant for monster number
        const unsigned short int monsterTotal = 100;
    //declare monster array
        monsterData monster[monsterTotal];

//function prototype
//function prototype for//�ϵ{���Ȱ��B��
	void pauseProgram();
	void initialPlayer(playerData *p);
	void initialMonster(monsterData *m);
	void printPlayerData(playerData p);
	void battle(playerData *player, monsterData *monster);

//--------------�D�n�{���X(Main Code)--------------
//main��Ƭ[�c
//�����G1.00(10)
//�n�骺�B��qmain��ƶ}�l
//void�|��debugger�L�k�ҰʡI
int main()
	{
	//�ŧi�P�w�q(Declaration & Definition)
	//�СССССССССССССССССССС�

restart:
    //intial player data
        initialPlayer(&player);
    ////intial player data
    //for loop for assign monster data
    {
    //declare loop counter
        unsigned short int assignMonC;
    //loop
        for(assignMonC = 0; assignMonC < monsterTotal; assignMonC++)
            {
                initialMonster(&monster[assignMonC]);
            }
    }
    ////for loop for assign monster data

    //for loop for meet batt
    {
        unsigned short int meetMonC;
        for(meetMonC = 0; meetMonC < monsterTotal; meetMonC++)
            {
                printPlayerData(player);
                //while battle
                    while(player.life > 0 && monster[meetMonC].life > 0)
                        {
                            //print line
                                printf("%s�I��@���b�~�H�I\n�СССССССССС�\n", player.name);
                            //into battle
                                battle(&player, &monster[meetMonC]);

                        }
                ////while battle
                //break loop if player died
                    if(player.life < 0)
                        {
                            //print result
                                printf("%s�����F�C", player.name);
                                break;
                        }
                ////break loop if player died
            }
    }
    ////for loop for meet batt

    //prompt restart
        //prompt
        //�����G1.00(0)
            printf("�аݱz�n��%s���s�}�l�ܡ]�ܬ��_�B�笰�O�^�H", player.name);
            if('N' == getche())
                {
                    exit(0);
                }
                else
                    {
                        //clean screen
                            if(SYSTEM == 0)
                                {
                                    system("cls");
                                }
                                else
                                {
                                    system("clear");
                                }
                        goto restart;
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
void initialPlayer(playerData *p)
	{
		//�ŧi�P�w�q(Declaration & Definition)
            char inputName[31];

		//�СССССССССССССССССССС�
        //prompt
        //�����G1.00(0)
            printf("�п�J�z���H���ʺ١G");
            scanfTriggered = 1;
            scanf("%s", inputName);
        //open file
            FILE *saveData = fopen("D:\\DEBUG\\14-1\\bin\\Debug\\playerData.dat", "r");
            if(saveData == NULL)
                {
                    printf("�s�ɵL�kŪ��\n");
                    exit(1);
                }
        //while file not end
            while(!(feof(saveData)))
                  {
                    //define line buffer
                        char lineBuffer[121];//40words MAX if UTF-8
                    //bool assign or not
                        bool assignFinish = false;
                    //counter for assign checking
                        unsigned short int assignCheckC = 0;
                    //if find data start
                    //while read to END
                        while(fgets(lineBuffer, sizeof(lineBuffer), saveData)!= NULL)
                            {
                                //remove \n char
                                    strtok(lineBuffer, "\r\n");
                                //if find BEGIN
                                    if(!(strcmp(lineBuffer, "[playerData BEGIN]")))
                                        {

                                            /*test
                                                printf("[playerData BEGIN]Get!\n");
                                            *///test
											continue;

                                        }

                                    if((!strncmp(lineBuffer, "NAME=", strlen("NAME=")))&& (!strncmp((lineBuffer + strlen("NAME=")), inputName, strlen(inputName))) )
                                        {
                                            /*test
                                                printf("name Get!\n");
                                            *///test
                                            //assign name to player
                                                strcpy(p->name, (lineBuffer + strlen("NAME=")));
                                                assignCheckC++;//should be 1 now
											//continue
												continue;

                                        }
                                    if(!strncmp(lineBuffer, "EXP=", strlen("EXP=")) && assignCheckC == 1)
                                        {
                                            /*test
                                                printf("name Get!\n");
                                            *///test
                                            //assign EXP to player
                                                p->experience = atoi(lineBuffer + strlen("EXP="));
                                                assignCheckC++;//should be 2 now
											//continue
												continue;

                                        }
                                    if(!strncmp(lineBuffer, "LIFE=", strlen("LIFE=")) && assignCheckC == 2)
                                        {
                                            /*test
                                                printf("name Get!\n");
                                            *///test
                                            //assign life to player
                                                p->life = atoi(lineBuffer + strlen("LIFE="));
                                                assignCheckC++;//should be 3 now
											//continue
												continue;
                                        }
                                    if(!strncmp(lineBuffer, "MANA=", strlen("MANA=")) && assignCheckC == 3)
                                        {
                                            /*test
                                                printf("name Get!\n");
                                            *///test
                                            //assign mana to player
                                                p->mana = atoi(lineBuffer + strlen("MANA="));
                                                assignCheckC++;
											//continue
												continue;
                                        }
                                    if(!strncmp(lineBuffer, "SPEED=", strlen("SPEED=")) && assignCheckC == 4)
                                        {
                                            /*test
                                                printf("name Get!\n");
                                            *///test
                                            //assign speed to player
                                                p->speed = atoi(lineBuffer + strlen("SPEED="));
                                                assignCheckC++;
											//continue
												continue;
                                        }
                                    if(!strncmp(lineBuffer, "ATTACK=", strlen("ATTACK=")) && assignCheckC == 5)
                                        {
                                            /*test
                                                printf("name Get!\n");
                                            *///test
                                            //assign speed to player
                                                p->attack = atoi(lineBuffer + strlen("ATTACK="));
                                                assignCheckC++;//should be 6 now
											//continue
												continue;
                                        }
								//if check assign finish
									if(assignCheckC == 6)
										{
											assignFinish = true;
											break;
										}
                            }
						//if assign finish
							if(assignFinish == true)
								{
									break;

								}
							else
								{
									printf("Ū���s�ɥX�{���~�AŪ�ɭp�ƾ��̲׬�%d", assignCheckC);
									if(assignCheckC == 0)
										{
											printf("-->�d�L������W��");
										}
									exit(1);
								}

                    }

        /*assign 14-1
            strcpy(p->name, "�p�`��");
            p->experience = 0;
            p->life = 350 + rand() % (600 - 350 + 1);
            p->mana = 100 + rand() % (120 - 100 + 1);
            p->speed = 35 + rand() % (50 - 35 + 1);
            p->attack = 40 + rand() % (60 - 40 + 1);
        *///assign 14-1
        //close file
            fclose(saveData);
		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void initialMonster(monsterData *m)
	{
		//�ŧi�P�w�q(Declaration & Definition)


		//�СССССССССССССССССССС�
            strcpy(m->type, "Orc �b�~�H");
            m->provideExp = 15;
            m->life = 150 + rand() % (150 - 170 + 1);
            //m->mana = 100 + rand() % (120 - 100 + 1);
            m->speed = 35 + rand() % (50 - 35 + 1);
            m->attack = 20 + rand() % (30 - 20 + 1);

		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void battle(playerData *player, monsterData *monster)
	{
		//�ŧi�P�w�q(Declaration & Definition)
        //pointer to get the firstAttack

		//�СССССССССССССССССССС�
        //speed check
            if(player->speed > monster->speed)
                {
                    playerFirst:
                    //while loop when all life > 0
                        while(1)
                            {
                                //if firstAttack died break
                                    if(player->life <= 0)
                                          {
                                                //print result
                                                    printf("%s�����F\n", player->name);
                                                break;
                                          }
                                //firstAttack attacks
                                    //print message
                                        printf("%s�����A�y��%s���� %d �I�C\n", player->name, monster->type, player->attack);
                                    //calc
                                        monster->life = monster->life - player->attack;
                                ////firstAttack attacks
                                //if defense died break
                                    if(monster->life <= 0)
                                          {
                                                //print result
                                                    printf("%s�����F\n", monster->type);
                                                //add exp
                                                {
                                                    player->experience = player->experience + monster->provideExp;
                                                    printf("%s��o�g��� %d\n", player->name, monster->provideExp);
                                                }

                                                break;
                                          }
                                //defense attacks
                                    //print message
                                        printf("%s�����A�y��%s���� %d �I�C\n", monster->type, player->name, monster->attack);
                                    //calc
                                        player->life = player->life - monster->attack;

                                ////defense attacks
                            }
                }
            else if(player->speed < monster->speed)
                {
                    monsterFirst:
                    //while loop when all life > 0
                        while(1)
                            {
                                //if firstAttack died break
                                    if(monster->life <= 0)
                                          {
                                                //print result
                                                    printf("%s�����F\n", monster->type);
                                                //add exp
                                                {
                                                    player->experience = player->experience + monster->provideExp;
                                                    printf("%s��o�g��� %d\n", player->name, monster->provideExp);
                                                }

                                                break;
                                          }
                                //firstAttack attacks
                                    //print message
                                        printf("%s�����A�y��%s���� %d �I�C\n", monster->type, player->name, monster->attack);
                                    //calc
                                        player->life = player->life - monster->attack;
                                ////firstAttack attacks
                                //if defense died break
                                    if(player->life <= 0)
                                          {
                                                //print result
                                                    printf("%s�����F\n", player->name);
                                                break;
                                          }
                                //defense attacks
                                    //print message
                                        printf("%s�����A�y��%s���� %d �I�C\n", player->name, monster->type, player->attack);
                                    //calc
                                        monster->life = monster->life - player->attack;

                                ////defense attacks
                            }
                }
            else//same speed
                  {
                        bool playerFirst;
                        playerFirst = rand() % 2;
                        if(playerFirst)
                            {
                                goto playerFirst;
                            }
                            else
                            {
                                goto monsterFirst;
                            }
                  }

            //end print line
                printf("�ССССССССС�\n");


		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
	}
//��L��Ƭ[�c
//�����G1.00(1)
/*
returnType functionName(auguments)
*/
void printPlayerData(playerData p)
	{
		//�ŧi�P�w�q(Declaration & Definition)


		//�СССССССССССССССССССС�
            printf("%s\n", p.name);
            printf("��O %d, �t�� %d, �����O %d, �g��� %d\n", p.life, p.speed, p.attack, p.experience);


		//�СССССССССССССССССССС�
		//�Ǧ^���e
		return ;
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


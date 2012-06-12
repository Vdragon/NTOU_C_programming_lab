//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：21
//最新更新紀錄(Latest Update Log)：。
/*
其他(Other)：。
*/
//更新紀錄(Change Log)：。
//--------------注意事項--------------
/*
１.每一句Statement後面必接『;』。
２.記得Return 0;。
３.有BUG先檢查scanf。
４.compiler可能有處理函數、變數之先後，不要同時處理兩者。
５.運行函數要注意是否有return值。
６.在condition statement 中要使用多個AND、OR混合之判斷句時宜將AND分隔之各OR句用括號括起來。
７.不明原因：需int main(){}才能用偵錯工具。
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器選項(Preprocessor Code)--------------
//standard input/output library
//版本：1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
//Console IO library(Unknown)
//版本：1.00(0)
	#include <conio.h>

//string.h
//版本：1.00(0)
    #include <string.h>
//版本：1.00(2)
	/*
	for srand()
	for SYSTEM("pause") if working
	非Windows系統確定不能使用（因為無該系統指令）
	*/
	#include <stdlib.h>
//--------------環境設定(Enviroment Settings)--------------
//define debug functionality
	#define debug 0
//OS Catergory
	#define SYSTEM 0//Windows console = 0, Linux console = 1
//--------------全域宣告與定義(Global Declaration & Definition)--------------
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
//global variable for 方法二：運用輸入function（需#include <stdio.h>）
	short int scanfTriggered = 0;
	//declare player
        playerData player;
    //constant for monster number
        const unsigned short int monsterTotal = 100;
    //declare monster array
        monsterData monster[monsterTotal];

//function prototype
//function prototype for//使程式暫停運行
	void pauseProgram();
	void initialPlayer(playerData *p);
	void initialMonster(monsterData *m);
	void printPlayerData(playerData p);
	void battle(playerData *player, monsterData *monster);

//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(10)
//軟體的運行從main函數開始
//void會使debugger無法啟動！
int main()
	{
	//宣告與定義(Declaration & Definition)
	//－－－－－－－－－－－－－－－－－－－－－

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
                                printf("%s碰到一隻半獸人！\n－－－－－－－－－－－\n", player.name);
                            //into battle
                                battle(&player, &monster[meetMonC]);

                        }
                ////while battle
                //break loop if player died
                    if(player.life < 0)
                        {
                            //print result
                                printf("%s死掉了。", player.name);
                                break;
                        }
                ////break loop if player died
            }
    }
    ////for loop for meet batt

    //prompt restart
        //prompt
        //版本：1.00(0)
            printf("請問您要讓%s重新開始嗎（Ｎ為否、Ｙ為是）？", player.name);
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
	//－－－－－－－－－－－－－－－－－－－－－
		//傳回數字０（表程式運行成功）
		//版本：1.00(1)
		//return後面不可加註解！
			return 0;
	}
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void initialPlayer(playerData *p)
	{
		//宣告與定義(Declaration & Definition)
            char inputName[31];

		//－－－－－－－－－－－－－－－－－－－－－
        //prompt
        //版本：1.00(0)
            printf("請輸入您的人物暱稱：");
            scanfTriggered = 1;
            scanf("%s", inputName);
        //open file
            FILE *saveData = fopen("D:\\DEBUG\\14-1\\bin\\Debug\\playerData.dat", "r");
            if(saveData == NULL)
                {
                    printf("存檔無法讀取\n");
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
									printf("讀取存檔出現錯誤，讀檔計數器最終為%d", assignCheckC);
									if(assignCheckC == 0)
										{
											printf("-->查無此角色名稱");
										}
									exit(1);
								}

                    }

        /*assign 14-1
            strcpy(p->name, "小節敏");
            p->experience = 0;
            p->life = 350 + rand() % (600 - 350 + 1);
            p->mana = 100 + rand() % (120 - 100 + 1);
            p->speed = 35 + rand() % (50 - 35 + 1);
            p->attack = 40 + rand() % (60 - 40 + 1);
        *///assign 14-1
        //close file
            fclose(saveData);
		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void initialMonster(monsterData *m)
	{
		//宣告與定義(Declaration & Definition)


		//－－－－－－－－－－－－－－－－－－－－－
            strcpy(m->type, "Orc 半獸人");
            m->provideExp = 15;
            m->life = 150 + rand() % (150 - 170 + 1);
            //m->mana = 100 + rand() % (120 - 100 + 1);
            m->speed = 35 + rand() % (50 - 35 + 1);
            m->attack = 20 + rand() % (30 - 20 + 1);

		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void battle(playerData *player, monsterData *monster)
	{
		//宣告與定義(Declaration & Definition)
        //pointer to get the firstAttack

		//－－－－－－－－－－－－－－－－－－－－－
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
                                                    printf("%s死掉了\n", player->name);
                                                break;
                                          }
                                //firstAttack attacks
                                    //print message
                                        printf("%s攻擊，造成%s失血 %d 點。\n", player->name, monster->type, player->attack);
                                    //calc
                                        monster->life = monster->life - player->attack;
                                ////firstAttack attacks
                                //if defense died break
                                    if(monster->life <= 0)
                                          {
                                                //print result
                                                    printf("%s死掉了\n", monster->type);
                                                //add exp
                                                {
                                                    player->experience = player->experience + monster->provideExp;
                                                    printf("%s獲得經驗值 %d\n", player->name, monster->provideExp);
                                                }

                                                break;
                                          }
                                //defense attacks
                                    //print message
                                        printf("%s攻擊，造成%s失血 %d 點。\n", monster->type, player->name, monster->attack);
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
                                                    printf("%s死掉了\n", monster->type);
                                                //add exp
                                                {
                                                    player->experience = player->experience + monster->provideExp;
                                                    printf("%s獲得經驗值 %d\n", player->name, monster->provideExp);
                                                }

                                                break;
                                          }
                                //firstAttack attacks
                                    //print message
                                        printf("%s攻擊，造成%s失血 %d 點。\n", monster->type, player->name, monster->attack);
                                    //calc
                                        player->life = player->life - monster->attack;
                                ////firstAttack attacks
                                //if defense died break
                                    if(player->life <= 0)
                                          {
                                                //print result
                                                    printf("%s死掉了\n", player->name);
                                                break;
                                          }
                                //defense attacks
                                    //print message
                                        printf("%s攻擊，造成%s失血 %d 點。\n", player->name, monster->type, player->attack);
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
                printf("－－－－－－－－－－\n");


		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}
//其他函數架構
//版本：1.00(1)
/*
returnType functionName(auguments)
*/
void printPlayerData(playerData p)
	{
		//宣告與定義(Declaration & Definition)


		//－－－－－－－－－－－－－－－－－－－－－
            printf("%s\n", p.name);
            printf("體力 %d, 速度 %d, 攻擊力 %d, 經驗值 %d\n", p.life, p.speed, p.attack, p.experience);


		//－－－－－－－－－－－－－－－－－－－－－
		//傳回內容
		return ;
	}

//－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//使程式暫停運行
//版本：1.00(27)
void pauseProgram()
    {
        //make a line
            printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
        /*開關
            //方法一︰執行系統指令（僅Windows系統有效、需#include <stdlib.h>）
                printf("顯示運行結果，程式暫停運行\n");
                system("pause");
        */
            //方法二：運用輸入function（需#include <stdio.h>）
                //先清除input buffer
                //需全域定義short int scanfTriggered = 0;
                    //方法一
                    /*開關
                        if (scanfTriggered == 1)
                            {
                                  short int ch;
                                  while ((ch = getchar()) != EOF && ch != '\n');
                            }
                    */
                    //方法二
                    //開關
                        if (scanfTriggered == 1)
                            {
                                scanf("%*[^\n]");
                                scanf("%*c");
                            }
                    //
                //開關
                //print message
                    printf("顯示運行結果，程式暫停運行\n請按Enter繼續");
                //get char from keyboard
                    fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）
                  //
    }


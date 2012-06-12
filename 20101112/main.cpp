//程式框架(Program Frame)
//-------------------------------------------------------------------
//程式名稱(Program Name)：。
//程式敘述(Program Description)：。
//程式版本(Program Version)：1.00(0)
//程式框架版本(Program Frame Version)：A
//程式框架修訂號(Program Frame Revision Number)：19
//最新更新紀錄(Latest Update Log)：。
/*
其他(Other)：。
*/
//更新紀錄(Change Log)：。
//--------------注意事項--------------
/*
１.每一句Statement後面必接『;』。
２.記得Return 0;。
*
３.有BUG先檢查scanf。
４.compiler可能有處理函數、變數之先後，不要同時處理兩者。
５.運行函數要注意是否有return值。
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器選項(Preprocessor Code)--------------
//standard input/output library
//版本：1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()

//Date and time functions Library
//版本：1.00(0)
	/*
	for srand()
	*/
	#include <time.h>

//C Standard General Utilities Library
//版本：1.00(2)
	/*
	for srand()
	for SYSTEM("pause") if working
	非Windows系統確定不能使用（因為無該系統指令）
	*/
	#include <stdlib.h>

//--------------環境設定(Enviroment Settings)--------------
//define debug var
	#define debug 0
//掃地雷參數
    #define HEIGHT 9 //bordery MAX = 9
    #define WIDTH 19 //borderx MAX = 19
    #define MINETOTAL 80 //mine -1
    ////switch
//system
	#define SYSTEM 1//Windows console = 0, Linux console = 1
//--------------全域宣告與定義(Global Declaration & Definition)--------------
//global variable
//for 方法二：運用輸入function（需#include <stdio.h>）
	short int scanfTriggered = 0;

/*掃地雷參數(變數化)(因為陣列範圍無法變數化停用)
    short int HEIGHT = 4; //bordery
    short int WIDTH = 4; //borderx
    short int MINETOTAL = 3; //mine -1
    *///switch

//掃地雷變數
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
//--------------主要程式碼(Main Code)--------------
//main函數架構
//版本：1.00(9)
//軟體的運行從main函數開始
int main(void)
	{
	//宣告與定義(Declaration & Definition)
        //var for input POSITION/ACTION
            short int inputNum, inputAction;
            char inputRow;

	//－－－－－－－－－－－－－－－－－－－－－
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
                printf("請問您要對哪一格進行動作（例如：A1）？\t");
                //position
                    scanfTriggered = 1;
                    scanf("%c%hd", &inputRow, &inputNum);
                    //inputRow should be in ASCII order('A' = 65, and so on)
																															//debug
																															//printf("********Debug message: %hd\t%hd*********\n", inputRow, inputNum);
                //action
                    printf("請問您的動作是？\n");
                    printf("１.（插上／移除）旗子\t２.踩下去？\t");
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
                                printf("您不能踩已經放上旗子的地方！\n");
                                  //pause(temp)//conio(getch())不相容於Linux，所以只能用這招...
                                    //使程式暫停運行
                                    //版本：1.00(15)
                                        //方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
                                         //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
                                            //system("pause");
                                        //方法二：運用輸入function（需#include <stdio.h>）
                                         printf("請按Enter繼續");
                                            //先清除imput buffer
                                            //方法一
                                            /*
                                              short int ch;
                                              while ((ch = getchar()) != EOF && ch != '\n');
                                            */
                                            //方法二
                                            //需全域定義
                                            //short int scanfTriggered = 0;
                                            fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）
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
                                printf("您被炸死了ＸＤＤＤＤＤ");

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
                              printf("您不能於踩過的地方放上旗子！\n");
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
					printf("\n可惡＞＜，你怎麼還活著呢Ｏｒｚ？");
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
	//－－－－－－－－－－－－－－－－－－－－－
    //傳回數字０（表程式運行成功）
    //版本：1.00(1)
    //return後面不可加註解！
			return 0;
	}

/*(因為陣列範圍無法變數化停用)
void printTitle()
    {
        printf("\t踩\t地\t雷\t版本 1.00(1)\n");
        printf("－－遊戲前請輸入－－\n");
        //ask HEIGHT
        printf("列數：");
        scanfTriggered = 1;
        scanf("%d", &HEIGHT);
        printf("行數：");
        scanfTriggered = 1;
        scanf("%d", &WIDTH);
        printf("地雷數：");
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
    for(j = 0;j < HEIGHT + 2 ;j++ )//行的遞增
        {
        for(i = 0;i < WIDTH + 2;i++ )//列的遞增
            {
                mine[j][i] = 0;//reset game field

                //test
                //printf("0   ");
            }
        //printf("\n");
        }


					  //pause(temp)
						//使程式暫停運行
						//版本：1.00(15)
							//方法一︰執行系統指令（部份系統有效、需#include <stdlib.h>）
							 //printf("\n－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n顯示運行結果，程式暫停運行\n");
								//system("pause");
							//方法二：運用輸入function（需#include <stdio.h>）
							 //printf("請按Enter繼續");
								//先清除imput buffer
							    //方法一
							    /*
								  short int ch;
								  while ((ch = getchar()) != EOF && ch != '\n');
							    */
							    //方法二
							    //需全域定義
							    //short int scanfTriggered = 0;
								//fgetc(stdin); //參數stdin表鍵盤(stream來源)輸入（有scanf()就會無效，須清除inputbuffer）



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
                                    //checkUsed 歸零
                                    checkUsed = -1;//需跟for迴圈的increment抵銷
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
            printf("地雷總數 = %hd\t旗子總數 = %d\n", MINETOTAL, flagCurrent);
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
        printf(" ┌");
        for(i = 0 ;i < WIDTH - 1 ; i++)
            {
                printf("─┬");
            }
        printf("─┐");

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
                    		printf("│■");
                    	}
                    	else if(state[j][i] == 1)
                    	{
                    		printf("│◤");
                    	}
                    	else if(state[j][i] == 2)
                    	{
						    if(mine[j][i] == -1)
							 {
							   printf("│●");
							 }
						    else if(mine[j][i] == 0)
							   {
								  printf("│  ");
							   }
						    else
							   printf("│%2hd", mine[j][i]);
                    	}

                    }
                printf("│");
                //newline
                printf("\n");
                //row4
                printf(" ├");
                for(i = 0 ;i < WIDTH - 1 ; i++)
                    {
                        printf("─┼");
                    }
                printf("─┤");
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
                                printf("│■");
                            }
                        else if(state[j][i] == 1)
                            {
                                printf("│◤");
                            }
                        else
                            {
                                 if(mine[j][i] == -1)
                                       {
                                        printf("│●");
                                       }
                                 else if(mine[j][i] == 0)
                                        {
                                            printf("│  ");
                                        }
                                 else if (state[j][i] == 2)
                                    printf("│%2hd", mine[HEIGHT][i]);
                            }
                    }
                printf("│");
                //newline
                    printf("\n");
        //print last char row, new
            printf(" └");
            for(i = 0 ;i < WIDTH - 1 ; i++)
                {
                    printf("─┴");
                }
            printf("─┘");
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

    }

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
３.有BUG先檢查scanf。
４.compiler可能有處理函數、變數之先後，不要同時處理兩者。
５.運行函數要注意是否有return值。
*/
//--------------程式碼開始(Code Started)--------------
//--------------前置處理器選項(Preprocessor Code)--------------
//standard input/output library
//版本：1.00(0)
	#include <stdio.h> //for printf(), scanf(), fgetc()
//string.h
//版本：1.00(0)
    #include <string.h>
//Console IO library(Unknown)
//版本：1.00(0)
	#include <conio.h>
//--------------環境設定(Enviroment Settings)--------------
//define debug var
	#define debug 0
//--------------全域宣告與定義(Global Declaration & Definition)--------------
//global variable for 方法二：運用輸入function（需#include <stdio.h>）
	short int scanfTriggered = 0;
//function prototype
	void pauseProgram();
//--------------主要程式碼(Main Code)--------------
//標題輸出函數
//版本：1.00(5)
void printTitle()
    {
          printf("程式名稱(Program Name)：。\n");
          printf("程式敘述(Program Description)：\n。\n");
          printf("程式版本(Program Version)：1.00(0)\n");
          printf("Ｂｕｉｌｄ　ｂｙ　Ｖｄｒａｇｏｎ＠２０１０\nＡｌｌ　ｒｉｇｈｔｓ　ＲＥＳＥＲＶＥＤ\n");
          printf("－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－\n");
    }

//main函數架構
//版本：1.00(9)
//軟體的運行從main函數開始
int main(void)
	{
	//宣告與定義(Declaration & Definition)
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

	//－－－－－－－－－－－－－－－－－－－－－
    //printTitle
        //printTitle();
    while(1)
        {
    //prompt
        printf("請輸入帳號：");
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
                    printf("帳號錯誤。沒有這個人啦！\n");
                    continue;
                }
            else
            {
    //prompt pass
        printf("請輸入密碼：");
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
                            printf("\n密碼錯誤。\n");
                        //
                            continue;

                  }
            }


        //break
            break;
        }
    //ok
        printf("\n密碼正確。登入成功！\n歡迎進入魔法世界！ \n");


	//pause
		pauseProgram();
	//－－－－－－－－－－－－－－－－－－－－－
    //傳回數字０（表程式運行成功）
    //版本：1.00(1)
    //return後面不可加註解！
			return 0;
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
